#ifdef __CLING__
#pragma cling optimize(0)
#endif
void e_microelgamma()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Oct 27 09:35:54 2025) by ROOT version 6.36.04
   TCanvas *Canvas_1 = new TCanvas("e- microelectronics gammas", "e- microelectronics gammas", 264, 78, 1646, 822);
   gStyle->SetOptFit(0);
   //gStyle->SetOptStat(1111);
   gStyle->SetOptTitle(1);
   TColor::SetPalette(57, nullptr);
   Canvas_1->Range(-0.005865,-668987.1,0.052785,6020883);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1F *htemp__1 = new TH1F("e- microelectronics gammas", "Energy Deposit 3um Si target", 100, 0, 0.138);
   htemp__1->SetBinContent(1,1205717);
   htemp__1->SetBinContent(2,5097044);
   htemp__1->SetBinContent(3,2117567);
   htemp__1->SetBinContent(4,727550);
   htemp__1->SetBinContent(5,311246);
   htemp__1->SetBinContent(6,163525);
   htemp__1->SetBinContent(7,98923);
   htemp__1->SetBinContent(8,65473);
   htemp__1->SetBinContent(9,46140);
   htemp__1->SetBinContent(10,33899);
   htemp__1->SetBinContent(11,25682);
   htemp__1->SetBinContent(12,20002);
   htemp__1->SetBinContent(13,15920);
   htemp__1->SetBinContent(14,12982);
   htemp__1->SetBinContent(15,10502);
   htemp__1->SetBinContent(16,8594);
   htemp__1->SetBinContent(17,7135);
   htemp__1->SetBinContent(18,5999);
   htemp__1->SetBinContent(19,4916);
   htemp__1->SetBinContent(20,4113);
   htemp__1->SetBinContent(21,3473);
   htemp__1->SetBinContent(22,2794);
   htemp__1->SetBinContent(23,2254);
   htemp__1->SetBinContent(24,1872);
   htemp__1->SetBinContent(25,1466);
   htemp__1->SetBinContent(26,1198);
   htemp__1->SetBinContent(27,916);
   htemp__1->SetBinContent(28,729);
   htemp__1->SetBinContent(29,564);
   htemp__1->SetBinContent(30,476);
   htemp__1->SetBinContent(31,340);
   htemp__1->SetBinContent(32,270);
   htemp__1->SetBinContent(33,198);
   htemp__1->SetBinContent(34,140);
   htemp__1->SetBinContent(35,100);
   htemp__1->SetBinContent(36,88);
   htemp__1->SetBinContent(37,50);
   htemp__1->SetBinContent(38,42);
   htemp__1->SetBinContent(39,30);
   htemp__1->SetBinContent(40,15);
   htemp__1->SetBinContent(41,11);
   htemp__1->SetBinContent(42,10);
   htemp__1->SetBinContent(43,8);
   htemp__1->SetBinContent(44,5);
   htemp__1->SetBinContent(45,7);
   htemp__1->SetBinContent(46,4);
   htemp__1->SetBinContent(47,2);
   htemp__1->SetBinContent(48,3);
   htemp__1->SetBinContent(49,2);
   htemp__1->SetBinContent(50,1);
   htemp__1->SetBinContent(51,1);
   htemp__1->SetBinContent(55,1);
   htemp__1->SetBinContent(57,1);
   htemp__1->SetEntries(10000000);
   htemp__1->SetDirectory(nullptr);

   htemp__1->GetXaxis()->SetTitle("Energy deposit (MeV)");
   htemp__1->GetYaxis()->SetTitle("Counts normalized");
   
   TPaveStats *ptstats = new TPaveStats(0.78, 0.775, 0.98, 0.935, "brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_text0 = ptstats->AddText("Microelectronics");
   ptstats_text0->SetTextSize(0.03680000081658363);
   TText *ptstats_text1 = ptstats->AddText("Entries =          1e+07");
   TText *ptstats_text2 = ptstats->AddText("Mean  = 0.003062");
   TText *ptstats_text3 = ptstats->AddText("Std Dev   = 0.002809");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->SetParent(htemp__1);
   htemp__1->GetListOfFunctions()->Add(ptstats);
   htemp__1->SetFillStyle(101);
   htemp__1->GetXaxis()->SetRange(1, 34);
   htemp__1->GetXaxis()->SetLabelFont(42);
   htemp__1->GetXaxis()->SetTitleOffset(1);
   htemp__1->GetXaxis()->SetTitleFont(42);
   htemp__1->GetYaxis()->SetLabelFont(42);
   htemp__1->GetYaxis()->SetTitleFont(42);
   htemp__1->GetZaxis()->SetLabelFont(42);
   htemp__1->GetZaxis()->SetTitleOffset(1);
   htemp__1->GetZaxis()->SetTitleFont(42);
   htemp__1->DrawNormalized();
   
   TPaveText *pt = new TPaveText(0.352873, 0.935187, 0.647127, 0.995, "blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_text4 = pt->AddText("totalEnergyDeposit");
   pt->Draw("blNDC");
   Canvas_1->Modified();
   Canvas_1->SetSelected(Canvas_1);
}
