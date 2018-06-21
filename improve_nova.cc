void improve_nova() {
   //Draw a simple graph
   // To see the output of this macro, click begin_html <a href="gif/graph.gif">here</a>. end_html
   //Author: Rene Brun

   TCanvas *c1 = new TCanvas("c1","",200,10,700,500);

  const Int_t n = 73;
   Double_t x[n] = {-180, -175, -170,-165, -160,-155, -150,-145, -140,-135, -130,-125,  -120,-115, -110,-105, -100,-95,  -90,-85, -80,-75, -70,-65,  -60,-55, -50,-45, -40,-35,  -30,-25, -20,-15, -10,-5,   0,5, 10,15, 20,25, 30,35, 40,45, 50,55,  60,65, 70,75, 80,85,  90,95, 100,105, 110,115,  120,125, 130,135, 140,145,  150,155, 160,165, 170,175,  180};
   Double_t y[n] = {0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0};
   TGraph *h1 = new TGraph(n,x,y);
   h1->SetTitle("");
   h1->GetXaxis()->SetTitle("True #delta_{CP}[degree]");
   h1->GetYaxis()->SetTitle("#Delta#chi^{2} to exclude sin#delta_{CP} = 0");
   h1->GetYaxis()->SetRangeUser(0,35);
   h1->GetXaxis()->SetRangeUser(-180, 180);
   h1->GetYaxis()->CenterTitle();
   h1->GetXaxis()->CenterTitle();
   h1->Draw("AC");



/*######### NOvA (5%)   ########### */

/*################## sin^2(theta_23) = 0.5  ################*/
   const Int_t n_1 = 37;
   Double_t x_1[n_1] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_1[n_1] = {
-3.69157e-13,
0.181204,
0.693033,
1.46004,
2.37831,
3.32895,
4.19458,
4.87289,
5.28951,
5.40536,
5.21792,
4.71442,
4.0607,
3.30408,
2.37967,
1.42976,
0.661865,
0.169212,
-3.69157e-13,
0.168915,
0.652717,
1.39202,
2.29918,
3.2676,
4.18329,
4.93831,
5.4441,
5.64116,
5.49,
5.02702,
4.31783,
3.4608,
2.57494,
1.59182,
0.734729,
0.186858,
-3.69157e-13


};

   TGraph *total_1 = new TGraph(n_1,x_1,y_1);
   	total_1->SetLineColor(3);
   	total_1->SetLineWidth(2);
	//total_1->SetLineStyle(7);
   	total_1->Draw("C same");








/*################## T2K2 (4%) #####################*/

/*################## sin^2(theta_23) = 0.5 ################*/
   const Int_t n_2 = 37;
   Double_t x_2[n_2] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_2[n_2] = {-3.69157e-13,
0.419221,
1.5994,
3.37108,
5.51186,
7.77249,
9.90518,
11.6907,
12.8904,
13.5305,
13.542,
12.9886,
11.6907,
9.27923,
6.38536,
3.82911,
1.76775,
0.450931,
-3.45485e-13,
0.444659,
1.71757,
3.66035,
6.04145,
8.58475,
11.0052,
13.0466,
14.5142,//80
15.2988,//90
15.3863,//100
14.5142,//110
12.5655,
9.5387,
6.49529,
3.81373,
1.73672,
0.436864,
-3.42073e-13

};
  TGraph *total_2 = new TGraph(n_2,x_2,y_2);
   	total_2->SetLineColor(2);
   	total_2->SetLineWidth(2);
	//total_2->SetLineStyle(7);
   	total_2->Draw("C same");
 




 /* ######## T2K-II + NOvA (5%) + 3% precision on theta13 ############  */

/*################## sin^2(theta_23) = 0.5 ################*/
   const Int_t n_3 = 37;
   Double_t x_3[n_3] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_3[n_3] = {
-3.69157e-13,
0.630038,
2.32392,
5.0089,
8.4289,
12.1901,
15.8651,
19.0522,
21.4227,
22.7602,
22.983,
21.3074,
17.5049,
13.2867,
9.08125,
5.32993,
2.43094,
0.642554,
-3.69157e-13,
0.705461,
2.79589,
6.08827,
10.2456,
14.8227,
19.3241,
23.2683,
26.2488,
27.9877,
27.4293,
24.2071,
20.026,
15.306,
10.541,
6.23799,
2.84958,
0.71366,
-3.69157e-13




 };

   	TGraph *total_3 = new TGraph(n_3,x_3,y_3);
   	total_3->SetLineColor(4);
   	total_3->SetLineWidth(2);
	total_3->SetLineStyle(7);
   	total_3->Draw("C same");






  /* Draw horizontal lines   */
    c1->Update();
    TLine *l1 = new TLine(c1->GetUxmin(), 4, c1->GetUxmax(), 4);
    l1->SetLineColor(1);
    //l1->SetLineStyle(2);
    l1->Draw("L SAME");
    TLine *l2 = new TLine(c1->GetUxmin(), 9, c1->GetUxmax(), 9);
    l2->SetLineColor(9);
    //l2->SetLineStyle(2);
    l2->Draw("L SAME");
    TLine *l3 = new TLine(c1->GetUxmin(), 16, c1->GetUxmax(), 16);
    l3->SetLineColor(7);
    //l3->SetLineStyle(2);
    l3->Draw("L SAME");
    TLine *l4 = new TLine(c1->GetUxmin(), 25, c1->GetUxmax(), 25);
    l4->SetLineColor(6);
    l4->Draw("L SAME");

    TLegend * pleg = new TLegend(0.47,0.2,0.52,0.25);
    pleg -> AddEntry( l1 , "2#sigma" ,"");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();

    TLegend * pleg = new TLegend(0.47,0.31,0.52,0.36);
    pleg -> AddEntry( l2 , "3#sigma" ,"");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();

    TLegend * pleg = new TLegend(0.47,0.47,0.52,0.52);
    pleg -> AddEntry( l3 , "4#sigma" ,"");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();

    TLegend * pleg = new TLegend(0.15,0.68,0.2,0.73);
    pleg -> AddEntry( l3 , "5#sigma" ,"");   
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();


gStyle->SetOptStat(0);
leg = new TLegend(0.15,0.8,0.3,0.85);
leg->SetTextSize(0.02);
leg->SetTextColor(1);
leg->SetFillColor(0);
leg->SetBorderSize(0);
leg ->SetTextSize(12);
leg ->SetTextFont(43);
leg->AddEntry("","sin^{2}#theta_{23}=0.5","");

leg->Draw();


gStyle->SetOptStat(0);
leg = new TLegend(0.4,0.7,0.65,0.88);
leg->SetTextSize(0.02);
leg->SetTextColor(1);
leg->SetFillColor(0);
leg->SetBorderSize(0);
leg ->SetTextSize(12);
leg ->SetTextFont(43);
leg->AddEntry(total_3,"T2K-II + NOvA with #delta(sin^{2}2#theta_{13})/sin^{2}2#theta_{13}=3%","l");
leg->AddEntry(total_2,"T2K-II","l");
leg->AddEntry(total_1,"NOvA","l");

leg->Draw();


    gPad->Print("improve_nova.pdf");//pdf format

}
