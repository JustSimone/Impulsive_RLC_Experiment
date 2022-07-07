#include <iostream>
using namespace std;
int main()
{
  float Ea[5];
  float Eaf=0, Eac=0, Eap=0, Eafc=0;
  float Tc=0, Tf=0, mc=0, mf=0;
  cout<<"Inserisci gli errori.."<<'\n';
  cout<<"----------------------------"<<'\n';
  for(int e=0; e<4; e++)
  {
    cout<<"Ea"<<e+1<<": ";
    cin>>Ea[e];
  }
  cout<<"----------------------------"<<'\n';
  cout<<"Inserisci i valori delle masse e delle temperature.."<<'\n';
  cout<<"----------------------------"<<'\n';
  cout<<"Tc: ";
  cin>>Tc;
  cout<<"mc: ";
  cin>>mc;
  cout<<"Tf: ";
  cin>>Tf;
  cout<<"mf: ";
  cin>>mf;
  Eaf=((Ea[0]/mf)+(Ea[1]/Tf))*Tf*mf;
  Eac=((Ea[2]/mc)+(Ea[3]/Tc))*Tc*mc;
  Eap=Eaf+Eac;
  Eafc=Ea[0]+Ea[2];
  Ea[4]=((Eap/((mc*Tc)+(Tf*mf)))+(Eafc/(mc+mf)))*(((mf*Tf)+(mc*Tc))/(mc+mf));
  cout<<"----------------------------"<<'\n';
  cout<<Ea[4]<<'\n';
  return 0;
}
