void improve_sys() {
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
   h1->GetYaxis()->SetRangeUser(0,50);
   h1->GetXaxis()->SetRangeUser(-180, 180);
   h1->GetYaxis()->CenterTitle();
   h1->GetXaxis()->CenterTitle();
   h1->Draw("AC");



/* ################ T2K2 (4%) + NOvA (5%) + 3% precision th13 ######*/
/* ################ sin^2(th23) = 0.43 ###############*/

   const Int_t n_1 = 37;
   Double_t x_1[n_1] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_1[n_1] = {
-3.25883e-13,
0.906621,
3.50641,
7.48805,
12.4005,
17.7087,
22.8568,
27.3291,
30.7063,
32.7083,
30.6699,
27.2339,
22.7239,
17.5676,
12.2795,
7.40557,
3.46564,
0.89618,
-3.14245e-13,
0.900982,
3.53057,
7.63639,
12.7977,
18.47,
24.0486,
28.9454,
32.6609,
34.1299,
32.132,
28.6032,
23.8665,
18.4051,
12.8023,
7.66618,
3.55538,
0.90968,
-3.33551e-13


};

   TGraph *total_1 = new TGraph(n_1,x_1,y_1);
   	total_1->SetLineColor(2);
   	total_1->SetLineWidth(2);
	//total_1->SetLineStyle(7);
   	total_1->Draw("C same");
/*
 	TGraph *total_1 = new TGraph(n_1,x_1,y_1);
	g1 = new TF1("gr1", "gaus(0) ", -180, 0);
	total_1->Fit(g1, "R");
	Double_t par_1[3];
	//total_1->SetParameters(par_1[0]);
   	total_1->SetLineColor(2);
   	total_1->SetLineWidth(2);
   	//total_1->SetLineStyle(7);
   	total_1->Draw("C same");
*/
/* ################ sin^2(th23) = 0.5 ###############*/

   const Int_t n_2 = 37;
   Double_t x_2[n_2] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_2[n_2] = {
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

   TGraph *total_2 = new TGraph(n_2,x_2,y_2);
   	total_2->SetLineColor(3);
   	total_2->SetLineWidth(2);
	//total_2->SetLineStyle(7);
   	total_2->Draw("C same");



/* ################ sin^2(th23) = 0.6 ###############*/

   const Int_t n_3 = 37;
   Double_t x_3[n_3] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_3[n_3] = {
-4.06894e-13,
0.621174,
2.40495,
5.14237,
8.52852,
12.1989,
15.7737,
18.9017,
21.2969,
22.7607,
21.7715,
19.2629,
16.0182,
12.3423,
8.59769,
5.16685,
2.40909,
0.62058,
-4.06894e-13,
0.621174,
2.42479,
5.22567,
8.72892,
12.5628,
16.3236,
19.623,
22.1363,
23.6508,
22.4885,
19.8946,
16.52,
12.6943,
8.80771,
5.26594,
2.44032,
0.624302,
-4.06894e-13

};

   TGraph *total_3 = new TGraph(n_3,x_3,y_3);
   	total_3->SetLineColor(4);
   	total_3->SetLineWidth(2);
	//total_3->SetLineStyle(7);
   	total_3->Draw("C same");







/*################## T2K2 (2%) + NOvA(2%) #####################*/
/*################## sin^2(theta_23) = 0.43 ################*/
   const Int_t n_4 = 37;
   Double_t x_4[n_4] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_4[n_4] = {
-3.25883e-13,
1.10786,
4.28837,
9.16371,
15.1816,
21.6836,
27.9827,
33.4384,
37.5265,
39.8917,
37.0114,
32.1919,
27.0165,
20.9926,
14.7396,
8.92531,
4.19228,
1.08774,
-3.25883e-13,
1.09457,
4.30013,
9.32232,
15.6538,
22.6283,
29.4968,
35.5205,
39.0672,
40.0781,
38.0402,
34.0842,
28.5885,
22.1395,
15.4516,
9.27795,
4.3123,
1.10532,
-3.25883e-13


};
	TGraph *total_4 = new TGraph(n_4,x_4,y_4);
   	total_4->SetLineColor(2);
   	total_4->SetLineWidth(2);
	total_4->SetLineStyle(7);
   	total_4->Draw("C same");

/*
    TGraph *gr_4 = new TGraph(n_4,x_4,y_4);
g41 = new TF1("gr41", "gaus", -180, 0);
//g42 = new TF1("gr42", "gaus", 0, 180);

total_4 = new TF1("gr_4", "gaus(0)", -180, 0);
gr_4->Fit(g41, "R");
//gr_4->Fit(g22, "R+");

Double_t par_4[9];
g41->GetParameters(&par_4[0]);
//g42->GetParameters(&par_4[3]);

total_4->SetParameters(par_4);
gr_4->Fit(total_4, "R+");
   total_4->SetLineColor(2);
   total_4->SetLineWidth(2);
   //total_4->SetLineStyle(7);
   total_4->Draw("same");

*/
/*################## sin^2(theta_23) = 0.5 ################*/
   const Int_t n_5 = 37;
   Double_t x_5[n_5] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_5[n_5] = {
-3.69157e-13,
0.715039,
2.67096,
5.86623,
9.99055,
14.562,
19.0469,
22.9389,
25.8193,
27.4071,
27.5887,
24.6772,
20.342,
15.4585,
10.5477,
6.15486,
2.77242,
0.726333,
-3.69157e-13,
0.841953,
3.36917,
7.38606,
12.4915,
18.1398,
23.7107,
28.5925,
32.2603,
34.3491,
32.3684,
28.7459,
23.8926,
18.3194,
12.6382,
7.48019,
3.41037,
0.849495,
-3.69157e-13

};
  TGraph *total_5 = new TGraph(n_5,x_5,y_5);
   	total_5->SetLineColor(3);
   	total_5->SetLineWidth(2);
	total_5->SetLineStyle(7);
   	total_5->Draw("C same");
 
/*################## sin^2(theta_23) = 0.6 ################*/
   const Int_t n_6 = 37;
   Double_t x_6[n_6] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_6[n_6] = {
-4.06894e-13,
0.795044,
3.08114,
6.59266,
10.9374,
15.6438,
20.2169,
24.1942,
27.1974,
28.1154,
26.4988,
23.6442,
19.8052,
15.358,
10.7597,
6.49984,
3.04498,
0.787812,
-4.06894e-13,
0.790969,
3.09841,
6.69852,
11.2198,
16.1836,
21.0607,
25.3342,
28.5649,
29.2401,
27.6126,
24.6431,
20.6092,
15.9276,
11.1026,
6.66285,
3.09693,
0.794176,
-4.06894e-13


};
  TGraph *total_6 = new TGraph(n_6,x_6,y_6);
   	total_6->SetLineColor(4);
   	total_6->SetLineWidth(2);
	total_6->SetLineStyle(7);
   	total_6->Draw("C same");

  /* Draw horizontal lines   */
    c1->Update();
/*    TLine *l1 = new TLine(c1->GetUxmin(), 4, c1->GetUxmax(), 4);
    l1->SetLineColor(1);
    //l1->SetLineStyle(2);
    l1->Draw("L SAME");
    TLine *l2 = new TLine(c1->GetUxmin(), 9, c1->GetUxmax(), 9);
    l2->SetLineColor(9);
    //l2->SetLineStyle(2);
    l2->Draw("L SAME");
*/
    TLine *l3 = new TLine(c1->GetUxmin(), 16, c1->GetUxmax(), 16);
    l3->SetLineColor(1);
    //l3->SetLineStyle(2);
    l3->Draw("L same");
    TLine *l4 = new TLine(c1->GetUxmin(), 25, c1->GetUxmax(), 25);
    l4->SetLineColor(6);
    l4->Draw("L same");


    TLegend * pleg = new TLegend(0.45,0.36,0.5,0.41);
    pleg -> AddEntry( l3 , "4#sigma" ,"");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();

    TLegend * pleg = new TLegend(0.45,0.51,0.5,0.56);
    pleg -> AddEntry( l3 , "5#sigma" ,"");   
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();


gStyle->SetOptStat(0);
leg = new TLegend(0.15,0.75,0.3,0.88);
leg->SetTextSize(0.02);
leg->SetTextColor(1);
leg->SetFillColor(0);
leg->SetBorderSize(0);
leg ->SetTextSize(12);
leg ->SetTextFont(43);
leg->AddEntry(total_1,"sin^{2}#theta_{23}=0.43","l");
leg->AddEntry(total_2,"sin^{2}#theta_{23}=0.5","l");
leg->AddEntry(total_3,"sin^{2}#theta_{23}=0.6","l");
leg->Draw();


gStyle->SetOptStat(0);
leg = new TLegend(0.35,0.75,0.65,0.88);
leg->SetTextSize(0.02);
leg->SetTextColor(1);
leg->SetFillColor(0);
leg->SetBorderSize(0);
leg ->SetTextSize(12);
leg ->SetTextFont(43);
leg->AddEntry(total_1,"sys. uncertainties: 4% for T2K-II and 5% for NOvA","l");
leg->AddEntry(total_4,"sys. uncertainties: 2% for T2K-II and 2% for NOvA","l");

leg->Draw();

gPad->Print("improve_sys.pdf");//pdf format

}

