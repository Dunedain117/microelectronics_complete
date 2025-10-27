#ifdef __CLING__
#pragma cling optimize(0)
#endif
void confronto()
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

   
   TH1F *histoEle__3 = new TH1F("histoEle__3", "Eabs {Eabs>0}", 100, 0, 0.006);
   histoEle__3->SetBinContent(1,584559);
   histoEle__3->SetBinContent(2,2467167);
   histoEle__3->SetBinContent(3,2749893);
   histoEle__3->SetBinContent(4,1671813);
   histoEle__3->SetBinContent(5,877209);
   histoEle__3->SetBinContent(6,504439);
   histoEle__3->SetBinContent(7,296703);
   histoEle__3->SetBinContent(8,182217);
   histoEle__3->SetBinContent(9,121325);
   histoEle__3->SetBinContent(10,87715);
   histoEle__3->SetBinContent(11,67473);
   histoEle__3->SetBinContent(12,54722);
   histoEle__3->SetBinContent(13,45673);
   histoEle__3->SetBinContent(14,40048);
   histoEle__3->SetBinContent(15,34701);
   histoEle__3->SetBinContent(16,30488);
   histoEle__3->SetBinContent(17,26785);
   histoEle__3->SetBinContent(18,21763);
   histoEle__3->SetBinContent(19,17062);
   histoEle__3->SetBinContent(20,13752);
   histoEle__3->SetBinContent(21,11741);
   histoEle__3->SetBinContent(22,10041);
   histoEle__3->SetBinContent(23,8913);
   histoEle__3->SetBinContent(24,7794);
   histoEle__3->SetBinContent(25,6892);
   histoEle__3->SetBinContent(26,6202);
   histoEle__3->SetBinContent(27,5512);
   histoEle__3->SetBinContent(28,5114);
   histoEle__3->SetBinContent(29,4574);
   histoEle__3->SetBinContent(30,4133);
   histoEle__3->SetBinContent(31,3588);
   histoEle__3->SetBinContent(32,3385);
   histoEle__3->SetBinContent(33,3067);
   histoEle__3->SetBinContent(34,2674);
   histoEle__3->SetBinContent(35,2534);
   histoEle__3->SetBinContent(36,2220);
   histoEle__3->SetBinContent(37,2041);
   histoEle__3->SetBinContent(38,1761);
   histoEle__3->SetBinContent(39,1561);
   histoEle__3->SetBinContent(40,1354);
   histoEle__3->SetBinContent(41,1258);
   histoEle__3->SetBinContent(42,1076);
   histoEle__3->SetBinContent(43,918);
   histoEle__3->SetBinContent(44,828);
   histoEle__3->SetBinContent(45,760);
   histoEle__3->SetBinContent(46,644);
   histoEle__3->SetBinContent(47,548);
   histoEle__3->SetBinContent(48,456);
   histoEle__3->SetBinContent(49,395);
   histoEle__3->SetBinContent(50,326);
   histoEle__3->SetBinContent(51,299);
   histoEle__3->SetBinContent(52,277);
   histoEle__3->SetBinContent(53,228);
   histoEle__3->SetBinContent(54,175);
   histoEle__3->SetBinContent(55,150);
   histoEle__3->SetBinContent(56,117);
   histoEle__3->SetBinContent(57,124);
   histoEle__3->SetBinContent(58,105);
   histoEle__3->SetBinContent(59,91);
   histoEle__3->SetBinContent(60,65);
   histoEle__3->SetBinContent(61,68);
   histoEle__3->SetBinContent(62,45);
   histoEle__3->SetBinContent(63,52);
   histoEle__3->SetBinContent(64,37);
   histoEle__3->SetBinContent(65,31);
   histoEle__3->SetBinContent(66,34);
   histoEle__3->SetBinContent(67,30);
   histoEle__3->SetBinContent(68,23);
   histoEle__3->SetBinContent(69,20);
   histoEle__3->SetBinContent(70,21);
   histoEle__3->SetBinContent(71,11);
   histoEle__3->SetBinContent(72,14);
   histoEle__3->SetBinContent(73,12);
   histoEle__3->SetBinContent(74,7);
   histoEle__3->SetBinContent(75,2);
   histoEle__3->SetBinContent(76,5);
   histoEle__3->SetBinContent(77,3);
   histoEle__3->SetBinContent(78,7);
   histoEle__3->SetBinContent(79,8);
   histoEle__3->SetBinContent(80,3);
   histoEle__3->SetBinContent(81,4);
   histoEle__3->SetBinContent(82,2);
   histoEle__3->SetBinContent(83,2);
   histoEle__3->SetBinContent(85,4);
   histoEle__3->SetBinContent(86,2);
   histoEle__3->SetBinContent(87,4);
   histoEle__3->SetBinContent(88,1);
   histoEle__3->SetBinContent(89,2);
   histoEle__3->SetBinContent(90,1);
   histoEle__3->SetBinContent(92,1);
   histoEle__3->SetEntries(9999904);

   histoEle__3->SetTitle("AnaEx01");
   histoEle__3->SetLineColor(kRed);

   histoEle__3->SetStats(0);

   TH1F *htemp__1 = new TH1F("htemp__1", "#splitline{Energy Absorbtion in 3 um Si target | 200 keV e-}{Microelectronics}", 100, 0, 0.074); //0.074
   htemp__1->SetBinContent(1,11958);
   htemp__1->SetBinContent(2,134993);
   htemp__1->SetBinContent(3,303494);
   htemp__1->SetBinContent(4,222197);
   htemp__1->SetBinContent(5,122475);
   htemp__1->SetBinContent(6,67697);
   htemp__1->SetBinContent(7,38854);
   htemp__1->SetBinContent(8,23870);
   htemp__1->SetBinContent(9,15900);
   htemp__1->SetBinContent(10,11108);
   htemp__1->SetBinContent(11,8177);
   htemp__1->SetBinContent(12,6279);
   htemp__1->SetBinContent(13,4982);
   htemp__1->SetBinContent(14,3877);
   htemp__1->SetBinContent(15,3121);
   htemp__1->SetBinContent(16,2626);
   htemp__1->SetBinContent(17,2216);
   htemp__1->SetBinContent(18,1864);
   htemp__1->SetBinContent(19,1573);
   htemp__1->SetBinContent(20,1412);
   htemp__1->SetBinContent(21,1228);
   htemp__1->SetBinContent(22,1102);
   htemp__1->SetBinContent(23,924);
   htemp__1->SetBinContent(24,829);
   htemp__1->SetBinContent(25,710);
   htemp__1->SetBinContent(26,662);
   htemp__1->SetBinContent(27,604);
   htemp__1->SetBinContent(28,559);
   htemp__1->SetBinContent(29,471);
   htemp__1->SetBinContent(30,454);
   htemp__1->SetBinContent(31,373);
   htemp__1->SetBinContent(32,373);
   htemp__1->SetBinContent(33,319);
   htemp__1->SetBinContent(34,268);
   htemp__1->SetBinContent(35,280);
   htemp__1->SetBinContent(36,223);
   htemp__1->SetBinContent(37,198);
   htemp__1->SetBinContent(38,197);
   htemp__1->SetBinContent(39,175);
   htemp__1->SetBinContent(40,155);
   htemp__1->SetBinContent(41,156);
   htemp__1->SetBinContent(42,106);
   htemp__1->SetBinContent(43,104);
   htemp__1->SetBinContent(44,93);
   htemp__1->SetBinContent(45,94);
   htemp__1->SetBinContent(46,84);
   htemp__1->SetBinContent(47,65);
   htemp__1->SetBinContent(48,64);
   htemp__1->SetBinContent(49,51);
   htemp__1->SetBinContent(50,54);
   htemp__1->SetBinContent(51,38);
   htemp__1->SetBinContent(52,47);
   htemp__1->SetBinContent(53,42);
   htemp__1->SetBinContent(54,22);
   htemp__1->SetBinContent(55,32);
   htemp__1->SetBinContent(56,20);
   htemp__1->SetBinContent(57,23);
   htemp__1->SetBinContent(58,22);
   htemp__1->SetBinContent(59,19);
   htemp__1->SetBinContent(60,9);
   htemp__1->SetBinContent(61,10);
   htemp__1->SetBinContent(62,8);
   htemp__1->SetBinContent(63,10);
   htemp__1->SetBinContent(64,5);
   htemp__1->SetBinContent(65,5);
   htemp__1->SetBinContent(66,8);
   htemp__1->SetBinContent(67,4);
   htemp__1->SetBinContent(68,2);
   htemp__1->SetBinContent(69,1);
   htemp__1->SetBinContent(70,5);
   htemp__1->SetBinContent(71,4);
   htemp__1->SetBinContent(72,2);
   htemp__1->SetBinContent(74,1);
   htemp__1->SetBinContent(75,1);
   htemp__1->SetBinContent(76,2);
   htemp__1->SetBinContent(78,1);
   htemp__1->SetBinContent(82,1);
   htemp__1->SetBinContent(84,2);
   htemp__1->SetBinContent(85,1);
   htemp__1->SetBinContent(86,1);
   htemp__1->SetBinContent(90,1);
   htemp__1->SetBinContent(91,1);
   htemp__1->SetBinContent(92,1);
   htemp__1->SetEntries(999999);
   htemp__1->SetDirectory(nullptr);


   htemp__1->SetLineColor(kBlue);
   
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
   ptstats->SetParent(histoEle__3)*/;
   //histoEle__3->GetListOfFunctions()->Add(ptstats);
   histoEle__3->SetFillStyle(101);
   histoEle__3->GetXaxis()->SetRange(1, 100);
   histoEle__3->GetXaxis()->SetLabelFont(42);

   histoEle__3->GetXaxis()->SetTitleOffset(1);
   histoEle__3->GetXaxis()->SetTitleFont(42);
   histoEle__3->GetYaxis()->SetLabelFont(42);
   histoEle__3->GetYaxis()->SetTitleFont(42);
   histoEle__3->GetZaxis()->SetLabelFont(42);
   histoEle__3->GetZaxis()->SetTitleOffset(1);
   histoEle__3->GetZaxis()->SetTitleFont(42);
   histoEle__3->Rebin(4);

   htemp__1->GetXaxis()->SetTitle("Energy deposit (MeV)");
   htemp__1->GetYaxis()->SetTitle("Counts normalized");
   

   htemp__1->SetTitle("Microelectronics");


   htemp__1->DrawNormalized();

   histoEle__3->DrawNormalized("same");
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
