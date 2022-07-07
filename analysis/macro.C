Double_t fun(Double_t* x, Double_t* par) {
	Double_t xx = x[0];
	return TMath::Exp(par[1]*xx)*(par[0]*TMath::Sin(par[2]*xx + par[3]));
}

void maxati(){

	Double_t L_max = 0.04696 /*Henry*/;

	Double_t R_elvis = 50 /*Ohm*/;
	Double_t R_680 = 678.55 /*Ohm*/;
	Double_t R = R_680 + R_elvis;

	Double_t C = 9.94E-9 /*Farad*/;


	TGraphErrors* g = new TGraphErrors("data/root data/dati_max1.dat", "%lg %lg %lg");
	TF1* f = new TF1("f", fun, 0, 0.0006, 4);
	f->SetParameters(3,-16000,100000,0);
	TCanvas* c = new TCanvas("c", "Maxati");
	g->Fit(f, "","",3.2e-05,0.00046);
	Double_t alpha = f->GetParameter(1);
	Double_t R_L = - (R + alpha * 2 * L_max);
	cout<<"\nR_L = "<<R_L;
	cout<<"\nX2/DOF: "<< f->GetChisquare()/f->GetNDF()<<'\n';
	ofstream w;
	w.open("files/parametri_max1.txt");
	w<<"Dati Maxati 1\n";
	w<<"---------------------\n";
	w<<"Parametro - Valore - Errore\n";
 	for(int i=0; i<4; ++i) {
		w<<'\n'<<i+1<<'\t';
		w<<f->GetParameter(i)<< " +/- "<< f->GetParError(i);
	}
	w<<"\n\nCon:\n1 - Ampiezza\n2 - Alpha\n3 - Pulsazione\n4 - Fase\n";
	w.close();
	c->Print("files/maxati.pdf");

	Double_t* y = g->GetY();
	Double_t* x = g->GetX();
	Double_t dif[500];

	for(int i=0; i<500; ++i) {
			dif[i] = y[i] - f->Eval(x[i]);
			cout<<dif[i]<<'\n';
	}

	TGraph* res = new TGraph(500,x, dif);

	TPad* pad1 = new TPad("pad1","Dati",0., 0.25, 1., 0.99);
  TPad* pad2 = new TPad("pad2","Residui",0., 0.01 , 1., 0.32);
	pad1->Draw();
	pad2->Draw();

	cout<<"\nX2/DOF: "<< f->GetChisquare()/f->GetNDF()<<'\n';
	pad1->cd();
	g->Fit(f, "","",1E-5,0.0007);
	g->Draw();

	pad2->cd();
	res->Draw();
}

void maxati1 () {

	Double_t L_max = 0.04696 /*Henry*/;

	Double_t R_elvis = 50 /*Ohm*/;
	Double_t R_1k = 997.4 /*Ohm*/;
	Double_t R = R_1k + R_elvis;

	Double_t C = 9.94E-9 /*Farad*/;


	TGraphErrors* g = new TGraphErrors("data/root data/dati_max2.dat", "%lg %lg %lg");
	TF1* f = new TF1("f", fun, 0, 0.0006, 4);
	f->SetParameters(3,-16000,100000,0);
	TCanvas* c = new TCanvas("c", "Maxati1");
	g->Fit(f, "","",0,0.00046);
	Double_t alpha = f->GetParameter(1);
	Double_t R_L = - (R + alpha * 2 * L_max);
	cout<<"\nR_L = "<<R_L;
	cout<<"\nX2/DOF: "<< f->GetChisquare()/f->GetNDF()<<'\n';
	ofstream w;
	w.open("files/parametri_max2.txt");
	w<<"Dati Maxati 2\n";
	w<<"---------------------\n";
	w<<"Parametro - Valore - Errore\n";
 	for(int i=0; i<4; ++i) {
		w<<'\n'<<i+1<<'\t';
		w<<f->GetParameter(i)<< " +/- "<< f->GetParError(i);
	}
	w<<"\n\nCon:\n1 - Ampiezza\n2 - Alpha\n3 - Pulsazione\n4 - Fase\n";
	w.close();

	c->Print("files/maxati2.pdf");

	Double_t* y = g->GetY();
	Double_t* x = g->GetX();
	Double_t dif[500];

	for(int i=0; i<500; ++i) {
			dif[i] = y[i] - f->Eval(x[i]);
			cout<<dif[i]<<'\n';
	}

	TGraph* res = new TGraph(500,x, dif);

	TPad* pad1 = new TPad("pad1","Dati",0., 0.25, 1., 0.99);
  TPad* pad2 = new TPad("pad2","Residui",0., 0.01 , 1., 0.32);
	pad1->Draw();
	pad2->Draw();

	cout<<"\nX2/DOF: "<< f->GetChisquare()/f->GetNDF()<<'\n';
	pad1->cd();
	g->Fit(f, "","",1E-5,0.0007);
	g->Draw();

	pad2->cd();
	res->Draw();
}



void macro() {
	TGraphErrors* g = new TGraphErrors("data/root data/dati_quadra.dat", "%lg %lg %lg");
	//TGraphErrors* g = new TGraphErrors("dati2.dat", "%lg %lg %lg");
	TF1* f = new TF1("f", fun, 0, 0.0006, 4);
	f->SetParameters(4,-5000,10000,4);
	Double_t* y = g->GetY();
	Double_t* x = g->GetX();
	Double_t dif[500];

	for(int i=0; i<500; ++i) {
			dif[i] = y[i] - f->Eval(x[i]);
			cout<<dif[i]<<'\n';
	}

	TGraph* res = new TGraph(500,x, dif);

	TCanvas* canva=new TCanvas("c1","",1920,1080);
	TPad* pad1 = new TPad("pad1","Dati",0., 0.25, 1., 0.99);
  TPad* pad2 = new TPad("pad2","Residui",0., 0.01 , 1., 0.32);
	pad1->Draw();
	pad2->Draw();

	cout<<"\nX2/DOF: "<< f->GetChisquare()/f->GetNDF()<<'\n';
	pad1->cd();
	g->Fit(f, "","",1E-5,0.0007);
	g->Draw();

	pad2->cd();
	res->Draw();

}

void norm() {

 	Double_t L = 0.01468 /*Henry*/;

	Double_t R_elvis = 50 /*Ohm*/;
	Double_t R_100 = 101.7/*Ohm*/;
	Double_t R = R_100 + R_elvis;

	Double_t C = 9.94E-9 /*Farad*/;

	TGraphErrors* g = new TGraphErrors("data/root data/dati1.dat", "%lg %lg %lg");
	TF1* f = new TF1("f", fun, 0, 0.0006, 4);
	f->SetParameters(4,-5000,10000,4);
	TCanvas* c = new TCanvas("c", "Nromali");
	g->Fit(f, "","",1.4E-5,0.0007);
	Double_t alpha = f->GetParameter(1);
	Double_t R_L = - (R + alpha * 2 * L);

	cout<<"\nX2/DOF: "<< f->GetChisquare()/f->GetNDF()<<'\n';
	ofstream w;
	w.open("files/impulso.txt");
	w<<"Dati Maxati 2\n";
	w<<"---------------------\n";
	w<<"Parametro - Valore - Errore\n";
	for(int i=0; i<4; ++i) {
		w<<'\n'<<i+1<<'\t';
		w<<f->GetParameter(i)<< " +/- "<< f->GetParError(i);
	}
	w<<"\n\nCon:\n1 - Ampiezza\n2 - Alpha\n3 - Pulsazione\n4 - Fase\n";
	w.close();
	g->Draw();

	c->Print("files/dati.pdf");
}

void generatori() {
	TGraph* g1 = new TGraph("data/root data/gen_wave.dat", "%lg %lg");
	TGraph* g2 = new TGraph("data/root data/gen_square.dat", "%lg %lg");

	TCanvas* c = new TCanvas("c", "Generatori");

	g1->SetLineColor(kRed);
	g2->SetLineColor(kBlack);
	g1->SetLineWidth(2);
	g2->SetLineWidth(2);

	g1->Draw();
	g2->Draw("SAME");
}

void noise() {
	TH1F* H = new TH1F("h", "h", 100, 2.49,2.52);
	Double_t c=0;
	ifstream read;
	read.open("n.txt");
	for(int i=0; i<400; ++i) {
		read>>c;
		cout<<c<<'\n';
		H->Fill(c);
	}
	H->Fit("gaus");
	cout<<H->GetRMS()<<'\n';
	cout<<H->GetBinContent(0)<<'\n';
	cout<<H->GetBinContent(401)<<'\n';
	H->Draw();
}
