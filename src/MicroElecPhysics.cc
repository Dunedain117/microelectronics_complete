//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// -------------------------------------------------------------------
// -------------------------------------------------------------------

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

#include "MicroElecPhysics.hh"
#include "G4SystemOfUnits.hh"

// Geant4-MicroElec MODELS

#include "G4MicroElecElastic.hh"
#include "G4MicroElecElasticModel.hh"

#include "G4MicroElecInelastic.hh"
#include "G4MicroElecInelasticModel.hh"
//

#include "G4LossTableManager.hh"
#include "G4EmConfigurator.hh"
#include "G4VEmModel.hh"
#include "G4DummyModel.hh"
#include "G4eIonisation.hh"
#include "G4hIonisation.hh"
#include "G4ionIonisation.hh"
#include "G4eMultipleScattering.hh"
#include "G4hMultipleScattering.hh"
#include "G4BraggModel.hh"
#include "G4BraggIonModel.hh"
#include "G4BetheBlochModel.hh"
#include "G4UrbanMscModel.hh"
#include "G4MollerBhabhaModel.hh"
#include "G4IonFluctuations.hh"
#include "G4UniversalFluctuation.hh"

#include "G4LivermoreGammaConversionModel.hh"
#include "G4LivermoreComptonModel.hh"
#include "G4LivermorePhotoElectricModel.hh"
#include "G4PhotoElectricEffect.hh"
#include "G4ComptonScattering.hh"
#include "G4GammaConversion.hh"

#include "ElectronCapture.hh"

#include "G4UAtomicDeexcitation.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

MicroElecPhysics::MicroElecPhysics():  G4VUserPhysicsList()
{
  defaultCutValue = 1*nanometer;
  cutForGamma     = defaultCutValue;
  cutForElectron  = defaultCutValue;
  cutForPositron  = defaultCutValue;
  cutForProton    = defaultCutValue;
  
  SetVerboseLevel(1);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

MicroElecPhysics::~MicroElecPhysics()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MicroElecPhysics::ConstructParticle()
{
  ConstructBosons();
  ConstructLeptons();
  ConstructBarions();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MicroElecPhysics::ConstructBosons()
{ 
  // gamma
  G4Gamma::GammaDefinition();
}
 //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MicroElecPhysics::ConstructLeptons()
{
  // leptons
  G4Electron::ElectronDefinition();
  G4Positron::PositronDefinition();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MicroElecPhysics::ConstructBarions()
{
  //  baryons
  G4Proton::ProtonDefinition();
  G4GenericIon::GenericIonDefinition();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MicroElecPhysics::ConstructProcess()
{
  AddTransportation();
  ConstructEM();
  ConstructGeneral();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MicroElecPhysics::ConstructEM()
{

  auto particleIterator=GetParticleIterator();
  particleIterator->reset();
  
  while( (*particleIterator)() )
  {

    G4ParticleDefinition* particle = particleIterator->value();
    G4ProcessManager* pmanager = particle->GetProcessManager();
    G4String particleName = particle->GetParticleName();

    // *********************************
    // 1) Processes for the World region
    // *********************************

    if (particleName == "e-") {

      // STANDARD msc is active in the world
      G4eMultipleScattering* msc = new G4eMultipleScattering();
      msc->AddEmModel(1, new G4UrbanMscModel());
      pmanager->AddProcess(msc, -1, 1, -1);

      // STANDARD ionisation is active in the world
      G4eIonisation* eion = new G4eIonisation();
      pmanager->AddProcess(eion, -1, 2, 2);

      // MicroElec elastic is not active in the world 
      G4MicroElecElastic* theMicroElecElasticProcess = new G4MicroElecElastic("e-_G4MicroElecElastic");
      theMicroElecElasticProcess->SetEmModel(new G4DummyModel());
      pmanager->AddDiscreteProcess(theMicroElecElasticProcess);

      // MicroElec ionisation is not active in the world 
      G4MicroElecInelastic* microelecioni = new G4MicroElecInelastic("e-_G4MicroElecInelastic");
      microelecioni->SetEmModel(new G4DummyModel()); 
      pmanager->AddDiscreteProcess(microelecioni);

      // THE FOLLOWING PROCESS WILL KILL ALL ELECTRONS BELOW A SELECTED ENERY THRESHOLD
      // Capture of low-energy e-
      ElectronCapture* ecap = new ElectronCapture("Target", 16.7*eV);
      pmanager->AddDiscreteProcess(ecap);
     	    
    } else if ( particleName == "proton" ) {

      // STANDARD msc is active in the world 
      G4hMultipleScattering* msc = new G4hMultipleScattering();
      msc->AddEmModel(1, new G4UrbanMscModel());
      pmanager->AddProcess(msc, -1, 1, -1);

      // STANDARD ionisation is active in the world 
      G4hIonisation* hion = new G4hIonisation();
      pmanager->AddProcess(hion, -1, 2, 2);

      // MicroElec ionisation is not active in the world 
      G4MicroElecInelastic* microelecioni = new G4MicroElecInelastic("p_G4MicroElecInelastic");
      microelecioni->SetEmModel(new G4DummyModel()); 
      microelecioni->SetEmModel(new G4DummyModel()); 
      pmanager->AddDiscreteProcess(microelecioni);

    } else if (particleName == "GenericIon") { 

      // STANDARD msc is active in the world 
      G4hMultipleScattering* msc = new G4hMultipleScattering();
      msc->AddEmModel(1, new G4UrbanMscModel());
      pmanager->AddProcess(new G4hMultipleScattering, -1, 1, -1);

      // STANDARD ionisation is active in the world 
      G4ionIonisation* hion = new G4ionIonisation();
      pmanager->AddProcess(hion, -1, 2, 2);

      // MicroElec ionisation is not active in the world 
      G4MicroElecInelastic* microelecioni = new G4MicroElecInelastic("ion_G4MicroElecInelastic");
      microelecioni->SetEmModel(new G4DummyModel()); 
      microelecioni->SetEmModel(new G4DummyModel());
      pmanager->AddDiscreteProcess(microelecioni);

      
    } else if (particleName == "gamma") { 


      G4LivermoreComptonModel* compton = new G4LivermoreComptonModel();
      auto* compton_process = new G4ComptonScattering();
      compton_process->SetEmModel(compton);
      pmanager->AddDiscreteProcess(compton_process);

     
      G4LivermorePhotoElectricModel* photoel = new G4LivermorePhotoElectricModel();     
      auto* photoel_process = new G4PhotoElectricEffect();
      photoel_process->SetEmModel(photoel);
      pmanager->AddDiscreteProcess(photoel_process);



      G4LivermoreGammaConversionModel* gammaconv = new G4LivermoreGammaConversionModel();
      auto* gammaconv_process = new G4GammaConversion();
      gammaconv_process->SetEmModel(gammaconv);
      pmanager->AddDiscreteProcess(gammaconv_process);
    
    
    
    }
  }

  // **************************************
  // 2) Define processes for Target region 
  // **************************************

  // STANDARD EM processes should be inactivated when corresponding MicroElec processes are used
  // - STANDARD EM e- processes are inactivated below 100 MeV
  // - STANDARD EM proton & ion processes are inactivated below standEnergyLimit
  //
  G4EmConfigurator* em_config = G4LossTableManager::Instance()->EmConfigurator();

  G4VEmModel* mod;
  // *** e-

  // ---> STANDARD EM processes are inactivated below 100 MeV
  
  G4UrbanMscModel* msc =  new G4UrbanMscModel();

  em_config->SetExtraEmModel("e-","msc",msc,"Target");
  
  mod = new G4MollerBhabhaModel();

  em_config->SetExtraEmModel("e-","eIoni",mod,"Target",0.0,10*TeV, new G4UniversalFluctuation());

  // ---> MicroElec processes activated

  mod = new G4MicroElecElasticModel();
  em_config->SetExtraEmModel("e-","e-_G4MicroElecElastic",mod,"Target",0.0,100*MeV);
  
  mod = new G4MicroElecInelasticModel();
  em_config->SetExtraEmModel("e-","e-_G4MicroElecInelastic",mod,"Target",16.7*eV,100*MeV);

  // *** proton
  
  // ---> STANDARD EM processes inactivated below standEnergyLimit

  // STANDARD msc is still active
  // Inactivate following STANDARD processes 
    
  mod = new G4BraggModel();
  mod->SetActivationHighEnergyLimit(50*keV);
  em_config->SetExtraEmModel("proton","hIoni",mod,"Target",0.0,2*MeV, new G4IonFluctuations());
    
  mod = new G4BetheBlochModel();
  mod->SetActivationLowEnergyLimit(10*GeV);
  em_config->SetExtraEmModel("proton","hIoni",mod,"Target",2*MeV,10*TeV, new G4IonFluctuations());
			     
  // ---> MicroElec processes activated  
  mod = new G4MicroElecInelasticModel(); 
  mod->SetActivationLowEnergyLimit(50*keV);
  em_config->SetExtraEmModel("proton","p_G4MicroElecInelastic",mod,"Target",0.0,10*GeV);
  em_config->SetExtraEmModel("proton","p_G4MicroElecInelastic",new G4DummyModel,
			     "Target",10*GeV,10*TeV);

 // *** ion

  // ---> STANDARD EM processes inactivated below standEnergyLimit

  // STANDARD msc is still active
  // Inactivate following STANDARD processes 

  mod = new G4BraggIonModel();
  mod->SetActivationHighEnergyLimit(50*keV);
  em_config->SetExtraEmModel("GenericIon","ionIoni",mod,"Target",0.0,2*MeV, new G4IonFluctuations());
 
  mod = new G4BetheBlochModel();
  mod->SetActivationLowEnergyLimit(10*GeV);
  em_config->SetExtraEmModel("GenericIon","ionIoni",mod,"Target",2*MeV,10*TeV, new G4IonFluctuations());
   
  // ---> MicroElec processes activated
  mod = new G4MicroElecInelasticModel(); 
  mod->SetActivationLowEnergyLimit(50*keV);
  em_config->SetExtraEmModel("GenericIon","ion_G4MicroElecInelastic",mod,
			     "Target",0.0,10*GeV);
  em_config->SetExtraEmModel("GenericIon","ion_G4MicroElecInelastic",new G4DummyModel,
			     "Target",10*GeV,10*TeV);

  //gammas
  //
    
  mod = new G4LivermoreComptonModel();
  em_config->SetExtraEmModel("gamma","G4LivermoreCompton",mod,"Target",0.0,10*GeV);

  mod = new G4LivermorePhotoElectricModel();
  em_config->SetExtraEmModel("gamma","G4LivermorePhotoel",mod,"Target",0.0,10*GeV);

  mod = new G4LivermoreGammaConversionModel();
  em_config->SetExtraEmModel("gamma","G4LivermoreGammaconv",mod,"Target",0.0,10*GeV);

  // Deexcitation
  //
  G4VAtomDeexcitation* de = new G4UAtomicDeexcitation();
  G4LossTableManager::Instance()->SetAtomDeexcitation(de);
  de->SetFluo(true);
  de->SetAuger(true);   
  de->SetPIXE(true);  
  de->InitialiseForNewRun();
  
  G4EmParameters* empar = G4EmParameters::Instance();
  empar->SetMscStepLimitType(fMinimal);      // step limit più permissivo
  empar->SetStepFunction(0.2, 1*nm);        // parametro (fraction, stepMax)
  empar->SetMinEnergy(100*eV);               // abbassa energia minima
  empar->SetLowestElectronEnergy(10*eV);     // opzionale



}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MicroElecPhysics::ConstructGeneral()
{ }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MicroElecPhysics::SetCuts()
{
  if (verboseLevel >0)
  {
    G4cout << "MicroElecSiPhysics::SetCuts:";
    G4cout << "CutLength : " << G4BestUnit(defaultCutValue,"Length") << G4endl;
  }  
  
  // set cut values for gamma at first and for e- second and next for e+,
  // because some processes for e+/e- need cut values for gamma 
  SetCutValue(cutForGamma, "gamma");
  SetCutValue(cutForElectron, "e-");
  SetCutValue(cutForPositron, "e+");
  SetCutValue(cutForProton, "proton");
  
  if (verboseLevel>0) { DumpCutValuesTable(); }
}
