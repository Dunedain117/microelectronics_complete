#ifdef __CLING__
#pragma cling optimize(0)
#endif
void histoGamma()
{
//=========Macro generated from canvas: Canvas_1_n3/Canvas_1_n3
//=========  (Mon Oct 20 12:51:09 2025) by ROOT version 6.36.04
   TCanvas *Canvas_1_n3 = new TCanvas("Canvas_1_n3", "Canvas_1_n3", 66, 71, 700, 500);
   gStyle->SetOptFit(0);
   gStyle->SetOptStat(1111);
   gStyle->SetOptTitle(1);
   TColor::SetPalette(57, nullptr);
   Canvas_1_n3->Range(-0.002325,-10.10625,0.020925,90.95625);
   Canvas_1_n3->SetFillColor(0);
   Canvas_1_n3->SetBorderMode(0);
   Canvas_1_n3->SetBorderSize(2);
   Canvas_1_n3->SetFrameBorderMode(0);
   Canvas_1_n3->SetFrameBorderMode(0);
   
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
   
   TPaveStats *ptstats = new TPaveStats(0.78, 0.775, 0.98, 0.935, "brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_text5 = ptstats->AddText("histoGamma");
   ptstats_text5->SetTextSize(0.03680000081658363);
   TText *ptstats_text6 = ptstats->AddText("Entries = 635    ");
   TText *ptstats_text7 = ptstats->AddText("Mean  = 0.001705");
   TText *ptstats_text8 = ptstats->AddText("Std Dev   = 0.002401");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->SetParent(histoGamma__2);
   histoGamma__2->GetListOfFunctions()->Add(ptstats);
   histoGamma__2->SetFillStyle(101);
   histoGamma__2->GetXaxis()->SetRange(1, 100);
   histoGamma__2->GetXaxis()->SetLabelFont(42);
   histoGamma__2->GetXaxis()->SetTitleOffset(1);
   histoGamma__2->GetXaxis()->SetTitleFont(42);
   histoGamma__2->GetYaxis()->SetLabelFont(42);
   histoGamma__2->GetYaxis()->SetTitleFont(42);
   histoGamma__2->GetZaxis()->SetLabelFont(42);
   histoGamma__2->GetZaxis()->SetTitleOffset(1);
   histoGamma__2->GetZaxis()->SetTitleFont(42);
   histoGamma__2->Draw();
   
   TPaveText *pt = new TPaveText(0.370372, 0.936895, 0.629628, 0.995, "blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_text9 = pt->AddText("Eabs {Eabs>0}");
   pt->Draw("blNDC");
   Canvas_1_n3->Modified();
   Canvas_1_n3->SetSelected(Canvas_1_n3);
}
