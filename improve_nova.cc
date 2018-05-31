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










/*################## T2K2 (4%) #####################*/

/*################## sin^2(theta_23) = 0.5 ################*/
   const Int_t n_2 = 37;
   Double_t x_2[n_2] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_2[n_2] = {-3.05441e-13,
0.387781,
1.48357,
3.13198,
5.12277,
7.21644,
9.17152,
10.7726,
11.8537,
12.3164,
12.1392,
11.3792,
10.1632,
7.86638,
5.4731,
3.28381,
1.52821,
0.392814,
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

 /*  	TGraph *total_2 = new TGraph(n_2,x_2,y_2);
   	total_2->SetLineColor(2);
   	total_2->SetLineWidth(2);
 	//total_2->SetLineStyle(7);
   	total_2->Draw("C same");

 */

   TGraph *gr_2 = new TGraph(n_2,x_2,y_2);
g21 = new TF1("gr21", "gaus", -180, -20);
g22 = new TF1("gr22", "gaus", 20, 180);

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
   Double_t y_2b[n_2b] = {-2.82314e-13,
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
-2.82314e-13



 };

   	TGraph *total_2b = new TGraph(n_2b,x_2b,y_2b);
   	total_2b->SetLineColor(2);
   	total_2b->SetLineWidth(2);
 	//total_2b->SetLineStyle(7);
   	total_2b->Draw("C same");

 
/*
   TGraph *gr_2b = new TGraph(n_2b,x_2b,y_2b);
g21b = new TF1("gr21b", "gaus", -180, -20);
g22b = new TF1("gr22b", "gaus", 20, 180);

total_2b = new TF1("gr_2b", "gaus(0) + gaus(3)", 0, 180);

gr_2b->Fit(g21b, "R");
gr_2b->Fit(g22b, "R+");

Double_t par_2b[9];
g21b->GetParameters(&par_2b[0]);
g22b->GetParameters(&par_2b[3]);

total_2b->SetParameters(par_2b);
gr_2b->Fit(total_2b, "R+");
   total_2b->SetLineColor(2);
   total_2b->SetLineWidth(2);
   //total_2b->SetLineStyle(7);
   total_2b->Draw("same");
*/



/*######### NOvA (5%)   ########### */

/*################## sin^2(theta_23) = 0.5  ################*/
   const Int_t n_1 = 37;
   Double_t x_1[n_1] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_1[n_1] = {-7.0276e-14,
0.20261,
0.774781,
1.63213,
2.65901,
3.7234,
4.69366,
5.45783,
5.9322,
6.06826,
5.86324,
5.35672,
4.62437,
3.76822,
2.66985,
1.59469,
0.738697,
0.189013,
-1.12291e-13,
0.188631,
0.731253,
1.56458,
2.59277,
3.69722,
4.74942,
5.62596,
6.22383,
6.47427,
6.3377,
5.84799,
5.07661,
4.13306,
2.97528,
1.77735,
0.82111,
0.208967,
-7.0276e-14




};

   TGraph *total_1 = new TGraph(n_1,x_1,y_1);
   	total_1->SetLineColor(3);
   	total_1->SetLineWidth(2);
	//total_1->SetLineStyle(7);
   	total_1->Draw("C same");



 /* ######## T2K-II + NOvA (5%) + 3% precision on theta13 ############  */

/*################## sin^2(theta_23) = 0.5 ################*/
   const Int_t n_3 = 37;
   Double_t x_3[n_3] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_3[n_3] = {-2.0565e-10,
0.659377,
2.29806,
5.0273,
8.55021,
12.4449,
16.2517,
19.5379,
21.9503,
23.1191,
21.7567,
19.3259,
16.0599,
12.3013,
8.46524,
4.99089,
2.28765,
0.654978,
-2.0565e-10,
0.719889,
2.85693,
6.24387,
10.5571,
15.3531,
20.1175,
24.3292,
26.6396,
26.8884,
25.7072,
23.1624,
19.505,
15.1405,
10.5734,
6.33961,
2.93441,
0.745784,
-2.0565e-10




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
leg = new TLegend(0.77,0.75,0.85,0.8);
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
