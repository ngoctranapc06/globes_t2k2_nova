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
   h1->GetYaxis()->SetRangeUser(0,40);
   h1->GetXaxis()->SetRangeUser(-180, 180);
   h1->GetYaxis()->CenterTitle();
   h1->GetXaxis()->CenterTitle();
   h1->Draw();






/* ################ T2K2 (4%) + NOvA (5%) + 3% precision th13 ######*/
/* ################ sin^2(th23) = 0.5 ###############*/
   const Int_t n_1 = 37;
   Double_t x_1[n_1] = {-180, -170, -160, -150, -140, -130,  -120, -110, -100,  -90, -80, -70,  -60, -50, -40,  -30, -20, -10,   0, 10, 20, 30, 40, 50,  60, 70, 80,  90, 100, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_1[n_1] = {-2.0565e-10,
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
-2.22752e-10,
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
-1.62124e-10


 };
   TGraph *total_1 = new TGraph(n_1,x_1,y_1);
   total_1->SetLineColor(2);
   total_1->SetLineWidth(2);
   total_1->Draw("C same");

//2% uncertainties
  const Int_t n_2 = 39;
   Double_t x_2[n_2] = {-180, -170, -160, -150, -140, -130,  -120, -110, -109, -108,
 -107, -106, -105, -104, -103, -102, -101, -100, -99, -98,
 -97, -96, -95, -94, -93, -92, -91, -90, -85, -80,
-75, -70,  -60, -50, -40,  -30, -20, -10,   0};
/*, 10,
 20, 30, 40, 50,  60, 70, 75, 80, 85,  90,
 95, 100, 105, 110,  120, 130, 140,  150, 160, 170,  180};
*/
   Double_t y_2[n_2] = {-2.38436e-10,
0.739174,
2.63944,
5.91646,
10.2055,
14.9865,
19.6879,
23.7675,//-110
24.123,
24.4673,
24.8,
25.1207,
25.4291,
25.725,
26.0074,
26.2771,
26.5333,
26.7672,
26.8305,
26.8798,
26.9161,
26.9382,
26.9463,
26.9403,
26.921,
26.8867,
26.8379,
26.7752,//-90
26.2474,//-85
25.3698,//-80
24.16,//-75
22.6471,
18.8764,
14.4694,
9.93368,
5.81292,
2.61858,
0.738436,
-2.38436e-10};


   TGraph *gr_2 = new TGraph(n_2,x_2,y_2);
g21 = new TF1("gr21", "gaus", -180, 0);
g22 = new TF1("gr22", "gaus", 0, 180);

total_2 = new TF1("gr_2", "gaus(0) + gaus(3)", -185, 0);

gr_2->Fit(g21, "R");
gr_2->Fit(g22, "R+");

Double_t par_2[9];
g21->GetParameters(&par_2[0]);
g22->GetParameters(&par_2[3]);

total_2->SetParameters(par_2);
gr_2->Fit(total_2, "R+");
   total_2->SetLineColor(4);
   total_2->SetLineWidth(2);
   total_2->SetLineStyle(7);
   total_2->Draw("same");

  const Int_t n_2b = 23;
   Double_t x_2b[n_2b] = { 0, 10, 20, 30, 40, 50,  60, 70, 75, 80, 85,  90, 95, 100, 105, 110,  120, 130, 140,  150, 160, 170,  180};
   Double_t y_2b[n_2b] = {
-2.38436e-10,
0.878147,
3.50187,
7.68026,
13.021,
18.9757,
24.9041,
29.0949,//70
30.3475,//75
31.2438,//80
31.7401,
31.8085,//90
31.4333,
30.6163,//100
29.3721,
27.731,
23.4491,
18.2601,
12.7821,
7.6756,
3.55452,
0.902445,
-1.5799e-10

 };

   	TGraph *total_2b = new TGraph(n_2b,x_2b,y_2b);
   	total_2b->SetLineColor(4);
   	total_2b->SetLineWidth(2);
	total_2b->SetLineStyle(7);
   	total_2b->Draw("C same");



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


    TLegend * pleg = new TLegend(0.47,0.43,0.52,0.48);
    pleg -> AddEntry( l3 , "4#sigma" ,"");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(12);
    pleg ->SetTextFont(43);
    pleg -> Draw();

    TLegend * pleg = new TLegend(0.15,0.61,0.2,0.67);
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
leg = new TLegend(0.35,0.75,0.65,0.88);
leg->SetTextSize(0.02);
leg->SetTextColor(1);
leg->SetFillColor(0);
leg->SetBorderSize(0);
leg ->SetTextSize(12);
leg ->SetTextFont(43);
leg->AddEntry(total_1,"expected sys. uncertainties","l");
leg->AddEntry(total_2,"2% sys. uncertainties","l");

leg->Draw();

gPad->Print("improve_sys.pdf");//pdf format

}

