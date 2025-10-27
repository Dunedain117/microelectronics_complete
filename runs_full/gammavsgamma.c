#ifdef __CLING__
#pragma cling optimize(0)
#endif
void gammavsgamma()
{
//=========Macro generated from canvas: Canvas_1_n3/Canvas_1_n3
//=========  (Mon Oct 20 12:53:04 2025) by ROOT version 6.36.04
   TCanvas *Canvas_1_n3 = new TCanvas("Canvas_1_n3", "Energy deposit in 3 um Si target", 66, 71, 700, 500);
   gStyle->SetOptFit(0);
   //gStyle->SetOptStat(1111);
   gStyle->SetOptTitle(0);
   TColor::SetPalette(57, nullptr);
   Canvas_1_n3->Range(-0.0048125,-360923.5,0.0433125,3248311);
   Canvas_1_n3->SetFillColor(0);
   Canvas_1_n3->SetBorderMode(0);
   Canvas_1_n3->SetBorderSize(2);
   Canvas_1_n3->SetFrameBorderMode(0);
   Canvas_1_n3->SetFrameBorderMode(0);
   auto pt = new TPaveText(0.1, 0.92, 0.9, 0.98, "NDC");
   pt->SetFillColor(0);
   pt->SetBorderSize(0);
   pt->AddText("Energy deposit in 3 um Si target");
   pt->SetTextSize(0.04);
   pt->SetTextAlign(22);

   
   TH1F *htemp__1 = new TH1F("gamma microelectronics gamma", "Energy Deposit 3um Si target", 100, 0, 0.0435);
   htemp__1->SetBinContent(1,87);
   htemp__1->SetBinContent(2,69);
   htemp__1->SetBinContent(3,75);
   htemp__1->SetBinContent(4,51);
   htemp__1->SetBinContent(5,67);
   htemp__1->SetBinContent(6,37);
   htemp__1->SetBinContent(7,36);
   htemp__1->SetBinContent(8,28);
   htemp__1->SetBinContent(9,23);
   htemp__1->SetBinContent(10,17);
   htemp__1->SetBinContent(11,11);
   htemp__1->SetBinContent(12,14);
   htemp__1->SetBinContent(13,11);
   htemp__1->SetBinContent(14,15);
   htemp__1->SetBinContent(15,2);
   htemp__1->SetBinContent(16,7);
   htemp__1->SetBinContent(17,6);
   htemp__1->SetBinContent(18,2);
   htemp__1->SetBinContent(19,4);
   htemp__1->SetBinContent(20,2);
   htemp__1->SetBinContent(21,6);
   htemp__1->SetBinContent(22,2);
   htemp__1->SetBinContent(23,1);
   htemp__1->SetBinContent(24,2);
   htemp__1->SetBinContent(25,1);
   htemp__1->SetBinContent(26,1);
   htemp__1->SetBinContent(27,2);
   htemp__1->SetBinContent(28,1);
   htemp__1->SetBinContent(29,2);
   htemp__1->SetBinContent(31,4);
   htemp__1->SetBinContent(32,3);
   htemp__1->SetBinContent(33,3);
   htemp__1->SetBinContent(34,1);
   htemp__1->SetBinContent(35,2);
   htemp__1->SetBinContent(37,1);
   htemp__1->SetBinContent(39,1);
   htemp__1->SetBinContent(40,1);
   htemp__1->SetBinContent(42,1);
   htemp__1->SetBinContent(43,1);
   htemp__1->SetBinContent(44,3);
   htemp__1->SetBinContent(47,2);
   htemp__1->SetBinContent(48,2);
   htemp__1->SetBinContent(49,2);
   htemp__1->SetBinContent(50,2);
   htemp__1->SetBinContent(51,1);
   htemp__1->SetBinContent(52,1);
   htemp__1->SetBinContent(54,1);
   htemp__1->SetBinContent(55,2);
   htemp__1->SetBinContent(57,2);
   htemp__1->SetBinContent(60,2);
   htemp__1->SetBinContent(64,2);
   htemp__1->SetBinContent(65,2);
   htemp__1->SetBinContent(66,1);
   htemp__1->SetBinContent(71,3);
   htemp__1->SetBinContent(73,1);
   htemp__1->SetBinContent(74,1);
   htemp__1->SetBinContent(81,2);
   htemp__1->SetBinContent(85,1);
   htemp__1->SetBinContent(92,1);
   htemp__1->SetEntries(634);
   htemp__1->SetDirectory(nullptr);


   htemp__1->SetTitle("microelectronics gamma energy deposit (red)");
   htemp__1->SetLineColor(kRed);
   htemp__1->GetXaxis()->SetTitle("Energy deposit (MeV)");
   htemp__1->GetYaxis()->SetTitle("Counts normalized");
   
   htemp__1->SetStats(0);

   TH1F *histoGamma__2 = new TH1F("histoGamma__2", "Eabs {Eabs>0}", 100, 0, 0.0186);
   histoGamma__2->SetBinContent(1,77);
   histoGamma__2->SetBinContent(2,67);
   histoGamma__2->SetBinContent(3,74);
   histoGamma__2->SetBinContent(4,52);
   histoGamma__2->SetBinContent(5,45);
   histoGamma__2->SetBinContent(6,39);
   histoGamma__2->SetBinContent(7,41);
   histoGamma__2->SetBinContent(8,27);
   histoGamma__2->SetBinContent(9,15);
   histoGamma__2->SetBinContent(10,22);
   histoGamma__2->SetBinContent(11,16);
   histoGamma__2->SetBinContent(12,20);
   histoGamma__2->SetBinContent(13,21);
   histoGamma__2->SetBinContent(14,14);
   histoGamma__2->SetBinContent(15,15);
   histoGamma__2->SetBinContent(16,6);
   histoGamma__2->SetBinContent(17,6);
   histoGamma__2->SetBinContent(18,4);
   histoGamma__2->SetBinContent(19,4);
   histoGamma__2->SetBinContent(20,3);
   histoGamma__2->SetBinContent(21,9);
   histoGamma__2->SetBinContent(22,4);
   histoGamma__2->SetBinContent(23,4);
   histoGamma__2->SetBinContent(24,2);
   histoGamma__2->SetBinContent(25,5);
   histoGamma__2->SetBinContent(26,1);
   histoGamma__2->SetBinContent(27,3);
   histoGamma__2->SetBinContent(29,2);
   histoGamma__2->SetBinContent(30,3);
   histoGamma__2->SetBinContent(31,3);
   histoGamma__2->SetBinContent(32,1);
   histoGamma__2->SetBinContent(34,1);
   histoGamma__2->SetBinContent(35,2);
   histoGamma__2->SetBinContent(37,1);
   histoGamma__2->SetBinContent(38,1);
   histoGamma__2->SetBinContent(39,1);
   histoGamma__2->SetBinContent(40,1);
   histoGamma__2->SetBinContent(44,2);
   histoGamma__2->SetBinContent(45,1);
   histoGamma__2->SetBinContent(48,1);
   histoGamma__2->SetBinContent(50,1);
   histoGamma__2->SetBinContent(52,2);
   histoGamma__2->SetBinContent(54,1);
   histoGamma__2->SetBinContent(55,1);
   histoGamma__2->SetBinContent(59,2);
   histoGamma__2->SetBinContent(62,1);
   histoGamma__2->SetBinContent(66,1);
   histoGamma__2->SetBinContent(69,2);
   histoGamma__2->SetBinContent(70,1);
   histoGamma__2->SetBinContent(71,1);
   histoGamma__2->SetBinContent(74,1);
   histoGamma__2->SetBinContent(78,1);
   histoGamma__2->SetBinContent(84,1);
   histoGamma__2->SetBinContent(85,1);
   histoGamma__2->SetBinContent(87,1);
   histoGamma__2->SetBinContent(92,1);
   histoGamma__2->SetEntries(635);

   histoGamma__2->SetLineColor(kBlue);
   
   /*TPaveStats *ptstats = new TPaveStats(0.78, 0.775, 0.98, 0.935, "brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_text10 = ptstats->AddText("histoEle");
   ptstats_text10->SetTextSize(0.03680000081658363);
   TText *ptstats_text11 = ptstats->AddText("Entries = 9999904");
   TText *ptstats_text12 = ptstats->AddText("Mean  = 0.001402");
   TText *ptstats_text13 = ptstats->AddText("Std Dev   = 0.00145");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->SetParent(htemp__1)*/;
   //htemp__1->GetListOfFunctions()->Add(ptstats);
   htemp__1->SetFillStyle(101);
   htemp__1->GetXaxis()->SetRange(1, 100);
   htemp__1->GetXaxis()->SetLabelFont(42);
   htemp__1->GetXaxis()->SetTitleOffset(1);
   htemp__1->GetXaxis()->SetTitleFont(42);
   htemp__1->GetYaxis()->SetLabelFont(42);
   htemp__1->GetYaxis()->SetTitleFont(42);
   htemp__1->GetZaxis()->SetLabelFont(42);
   htemp__1->GetZaxis()->SetTitleOffset(1);
   htemp__1->GetZaxis()->SetTitleFont(42);
   histoGamma__2->SetTitle("AnaEx01 gamma energy deposit");
   htemp__1->DrawNormalized();

   histoGamma__2->DrawNormalized("same");

   
   /*TPaveText *pt = new TPaveText(0.370372, 0.936895, 0.629628, 0.995, "blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_text14 = pt->AddText("Eabs {Eabs>0}");
   pt->Draw("blNDC");*/

   pt->Draw();
   Canvas_1_n3->BuildLegend();
   Canvas_1_n3->Modified();
   Canvas_1_n3->SetSelected(Canvas_1_n3);
}
