void improve_th13() {
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
   h1->GetYaxis()->SetRangeUser(0,25);
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
   	total_1->SetLineColor(4);
   	total_1->SetLineWidth(2);
	//total_1->SetLineStyle(7);
   	total_1->Draw("C same");

/*################## T2K2 (4%) #####################*/

/*################## sin^2(theta_23) = 0.5 ################*/
   const Int_t n_2 = 37;
   Double_t x_2[n_2] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_2[n_2] = {
-3.69157e-13,
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

/*
   TGraph *gr_2 = new TGraph(n_2,x_2,y_2);
g21 = new TF1("gr21", "gaus", -180, 0);
g22 = new TF1("gr22", "gaus", 0, 180);

total_2 = new TF1("gr_2", "gaus(0) + gaus(3)", -180, 0);

gr_2->Fit(g21, "R");
gr_2->Fit(g22, "R+");

Double_t par_2[9];
g21->GetParameters(&par_2[0]);
g22->GetParameters(&par_2[3]);

total_2->SetParameters(par_2);
gr_2->Fit(total_2, "R+");
   total_2->SetLineColor(2);
   total_2->SetLineWidth(2);
   //total_2->SetLineStyle(7);
   total_2->Draw("same");

   const Int_t n_2b = 19;
   Double_t x_2b[n_2b] = { 0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_2b[n_2b] = {
-2.82314e-13,
0.39307,
1.52911,
3.28096,
5.44898,
7.78256,
10.0099,
11.8721,
13.1583,
13.7341,
13.5609,
12.6998,
11.0257,
8.42986,
5.80929,
3.44479,
1.58147,
0.400426,
-2.78121e-13
};
   TGraph *total_2b = new TGraph(n_2b,x_2b,y_2b);
   	total_2b->SetLineColor(2);
   	total_2b->SetLineWidth(2);
	//total_2b->SetLineStyle(7);
   	total_2b->Draw("C same");
*/

 /* ################### NOvA (5%) + 3% precision on theta13 ####################  */

/*################## sin^2(theta_23) = 0.5 ################*/
   const Int_t n_3 = 37;
   Double_t x_3[n_3] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_3[n_3] = {
-3.69157e-13,
0.184844,
0.694166,
1.47423,
2.4529,
3.52327,
4.56369,
5.45949,
6.11559,
6.46934,
6.11922,
5.4106,
4.48617,
3.43945,
2.38022,
1.42122,
0.662396,
0.173105,
-3.69157e-13,
0.181753,
0.716581,
1.55843,
2.62538,
3.80842,
4.98277,
6.02242,
6.81554,
7.2786,
6.93856,
6.224,
5.22569,
4.0485,
2.82354,
1.69094,
0.781485,
0.19819,
-3.69157e-13


};
   TGraph *total_3 = new TGraph(n_3,x_3,y_3);
   	total_3->SetLineColor(4);
   	total_3->SetLineWidth(2);
	total_3->SetLineStyle(7);
   	total_3->Draw("C same");



/*################# T2K2 (4%) + 3% precision on theta13 ####### */
/*################## sin^2(theta_23) = 0.5 ################*/

  const Int_t n_4 = 37;
   Double_t x_4[n_4] = {-180,    -170,  -160,    -150,     -140,      -130,      -120,      -110,     -100, -90, -80, -70, -60, -50, -40, -30, -20, -10, 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180};
   Double_t y_4[n_4] = {
-2.12802e-10,
0.438299,
1.6163,
3.53053,
6.00167,
8.74934,
11.466,
13.8586,
15.6841,
16.779,
17.0752,
15.8187,
12.9493,
9.78915,
6.65549,
3.87627,
1.74794,
0.461434,
-1.44152e-10,
0.526067,
2.09755,
4.58403,
7.73127,
11.2005,
14.6153,
17.6112,
19.8848,
21.2328,
20.6249,
18.1157,
14.9189,
11.352,
7.7829,
4.58357,
2.08206,
0.517529,
-1.99282e-10

};
   TGraph *total_4 = new TGraph(n_4,x_4,y_4);
   	total_4->SetLineColor(2);
   	total_4->SetLineWidth(2);
	total_4->SetLineStyle(7);
   	total_4->Draw("C same");




  /* Draw horizontal lines   */
    c1->Update();
    TLine *l1 = new TLine(c1->GetUxmin(), 4, c1->GetUxmax(), 4);
    l1->SetLineColor(1);
    //l1->SetLineStyle(2);
    l1->Draw("L SAME");
    TLine *l2 = new TLine(c1->GetUxmin(), 9, c1->GetUxmax(), 9);
    l2->SetLineColor(3);
    //l2->SetLineStyle(2);
    l2->Draw("L SAME");
    TLine *l3 = new TLine(c1->GetUxmin(), 16, c1->GetUxmax(), 16);
    l3->SetLineColor(6);
    //l3->SetLineStyle(2);
    l3->Draw("L SAME");
    //TLine *l4 = new TLine(c1->GetUxmin(), 25, c1->GetUxmax(), 25);
    //l4->SetLineColor(4);
    //l4->Draw("L SAME");

    TLegend * pleg = new TLegend(0.47,0.23,0.52,0.28);
    pleg -> AddEntry( l1 , "2#sigma" ,"");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();

    TLegend * pleg = new TLegend(0.47,0.4,0.52,0.44);
    pleg -> AddEntry( l2 , "3#sigma" ,"");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();

    TLegend * pleg = new TLegend(0.13,0.62,0.23,0.67);
    pleg -> AddEntry( l3 , "4#sigma" ,"");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();


gStyle->SetOptStat(0);
leg = new TLegend(0.15,0.75,0.3,0.85);
leg->SetTextSize(0.03);
leg->SetTextColor(1);
leg->SetFillColor(0);
leg->SetBorderSize(0);
leg ->SetTextSize(12);
leg ->SetTextFont(43);
leg->AddEntry("","sin^{2}#theta_{23}=0.5","");

leg->Draw();


gStyle->SetOptStat(0);
leg = new TLegend(0.35,0.7,0.6,0.88);
leg->SetTextSize(0.02);
leg->SetTextColor(1);
leg->SetFillColor(0);
leg->SetBorderSize(0);
leg ->SetTextSize(12);
leg ->SetTextFont(43);
leg->AddEntry(total_1,"NOvA","l");
leg->AddEntry(total_2,"T2K-II","l");
leg->AddEntry(total_3,"NOvA with #delta(sin^{2}2#theta_{13})/sin^{2}2#theta_{13}=3%","l");
leg->AddEntry(total_4,"T2K-II with #delta(sin^{2}2#theta_{13})/sin^{2}2#theta_{13}=3%","l");
leg->Draw();


    gPad->Print("improve_th13.pdf");//pdf format

}
