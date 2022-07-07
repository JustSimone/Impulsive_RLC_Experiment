#include <fstream>
int segno(int d,int m)
{//1
  if (d>=21 && m==3 || m==4 && d<=20)
   return 1;//ariete
  else if (m==4 && d>=21||m==5 && d<=21)
   return 2;//toro
  else if (m==5 && d>=22||m==6 && d<=21)
   return 3;//gemelli
  else if (m==6 && d>=22||m==7 && d<=22)
   return 4;//cancro
  else if (m==7 && d>=23||m==8 && d<=22)
   return 5;//leone
  else if (m==8 && d>=23||m==9 && d<=22)
   return 6;//vergine
  else if (m==9 && d>=23||m==10 && d<=22)
   return 7;//bilancia
  else if (m==10 && d>=23||m==11 && d<=21)
   return 8;//scorpione
  else if (m==11 && d>=22||m==12 && d<=21)
   return 9;//saggittario
  else if (m==12 && d>=22||m==1 && d<=20)
   return 10;//capricorno
  else if (m==1 && d>=21||m==2 && d<=19)
   return 11;//acquario
  else if (m==2 && d>=20||m==3 && d<=20)
   return 12;//pesci
}

void sf(int d,int m)
{//1
  if (d>=21&&m==3||m==4 && d<=20)
   std::cout << "ariete" << '\n';
  else if (m==4 && d>=21||m==5 && d<=21)
   std::cout << "toro" << '\n';
  else if (m==5 && d>=22||m==6 && d<=21)
   std::cout << "gemelli" << '\n';
  else if (m==6 && d>=22||m==7 && d<=22)
   std::cout << "cancro" << '\n';
  else if (m==7 && d>=23||m==8 && d<=22)
   std::cout << "leone" << '\n';
  else if (m==8 && d>=23||m==9 && d<=22)
   std::cout << "vergine" << '\n';
  else if (m==9 && d>=23||m==10 && d<=22)
   std::cout << "bilancia" << '\n';
  else if (m==10 && d>=23||m==11 && d<=21)
   std::cout << "scorpione" << '\n';
  else if (m==11 && d>=22||m==12 && d<=21)
   std::cout << "saggittario" << '\n';
  else if (m==12 && d>=22||m==1 && d<=20)
   std::cout << "capricorno" << '\n';
  else if (m==1 && d>=21||m==2 && d<=19)
   std::cout << "acquario" << '\n';
  else if (m==2 && d>=20||m==3 && d<=20)
   std::cout << "pesci" << '\n';
}//1
void afse(int d, int m, std::string n, std::string c1, std::string sesso1)
{//1
  std::string n1="", c="", t="", e="", sesso="", note="",ascendent="";
  int s=0, g=0,me=0,a=0,x=0,o=0,min=0;
  s=segno(d,m);
    std::ifstream las;
    las.open("/Users/simonecoli/Documents/coper/archiovio/coper.txt");
    if (s==1)//ariete
    {//2
      while (!las.eof())
      {//4
        las>>n1;
        las>>c;
        las>>sesso;
        las>>t;
        las>>e;
        las>>g;
        las>>me;
        las>>a;
        las>>o;
        las>>min;
        las>>ascendent;
        las>>note;
        x=segno(g,me);
        if (sesso!=sesso1&&n1!=n && c1!=c)
        {
          if (x==1 || x==5 || x==7 || x==9)
          {
          std::cout<<"\n-------------------------------"<<"\n";
          std::cout<<"nome: "<<n1<<"\n";
          std::cout<<"cognome: "<<c<<"\n";
          std::cout<<"Sesso: "<<sesso<<"\n";
          std::cout<<"numero di telefono: "<<t<<"\n";
          std::cout<<"E-mail: "<<e<<"\n";
          std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
          sf(g,me);
          std::cout << "Note: "<<note << '\n';
          }
        }
      }//4
  }//2
  else if (s==2) //toro
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if( x==4 || x==6 || x==8 || x==10)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
      }
      }
    }
  }

  else if (s==3) //gemelli
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==5||x==11||x==7 || x==9)
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';

      }
    }
  }
  else if (s==4) //cancro
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==2||x==6||x==8 || x==12)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==5) //leone
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==1||x==3||x==7||x==6 || x==9)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==6) //vergine
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==2||x==4||x==5||x==7 || x==10)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==7)//bilancia
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==1||x==3||x==7||x==6 || x==9)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
      std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==8) //scorpione
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==2||x==4||x==10 || x==12)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
       }
      }
    }
  }

  else if (s==9) //saggittario
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==1||x==5||x==11 || x==9)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==10) //capricorno
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==2||x==6||x==8 || x==12)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==11) //acquario
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==3||x==7 || x==9)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==12)//pesci
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=segno(g,me);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==2||x==4||x==8 || x==10)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }
 las.close();
}//1

int difetta(int e,int e1)
{//1
  if(e-e1==0)
  return 1;
  else if(e-e1==1)
  return 1;
  else if(e-e1==2)
  return 1;
  else if(e-e1==3)
  return 1;
  else if(e-e1==4)
  return 1;
  else if(e-e1==5)
  return 1;
  else if(e-e1==-1)
  return 1;
  else if (e-e1==-2)
  return 1;
  else if(e-e1==-3)
  return 1;
  else if (e-e1==-4)
  return 1;
  else if(e-e1==-5)
  return 1;
  else
  return 0;
}//1

int ascendente(int me,int g,int o,int m)
{//1
  int s=0,x=0,y=0;
  s=segno(g,me);
  if (s==1)
  {//2
    //ariete 21-31 / 03
    if (21<=g<=31&&me==3&&o==6&&m>=30||21<=g<=31&&me==3&&o==7&&m<=44)
    return 1;
    else if (21<=g<=31&&me==3&&o==7&&m>=45||21<=g<=31&&me==3&&o==9&&m<=29)
    return 2;
    else if (21<=g<=31&&me==3&&o==9&&m>=30||21<=g<=31&&me==3&&o==11&&m<=59)
    return 3;
    else if (21<=g<=31&&me==3&&o==12&&m>=0||21<=g<=31&&me==3&&o==14&&m<=44)
    return 4;
    else if (21<=g<=31&&me==3&&o==14&&m>=45||21<=g<=31&&me==3&&o==17&&m<=29)
    return 5;
    else if (21<=g<=31&&me==3&&o==17&&m>=30||21<=g<=31&&me==3&&o==20&&m<=14)
    return 6;
    else if (21<=g<=31&&me==3&&o==20&&m>=15||21<=g<=31&&me==3&&o==22&&m<=59)
    return 7;
    else if (21<=g<=31&&me==3&&o==23&&m>=0||21<=g<=31&&me==3&&o==1&&m<=29)
    return 8;
    else if (21<=g<=31&&me==3&&o==1&&m>=30||21<=g<=31&&me==3&&o==3&&m<=14)
    return 9;
    else if (21<=g<=31&&me==3&&o==3&&m>=15||21<=g<=31&&me==3&&o==4&&m<=29)
    return 10;
    else if (21<=g<=31&&me==3&&o==4&&m>=30||21<=g<=31&&me==3&&o==5&&m<=29)
    return 11;
    else if (21<=g<=31&&me==3&&o==5&&m>=30||21<=g<=31&&me==3&&o==6&&m<=29)
    return 12;
    //ariete 21-31 / 03
    //ariete 1-10 / 04
    if (1<=g<=10&&me==4&&o==6&&m>=0||1<=g<=10&&me==4&&o==7&&m<=14)
    return 1;
    else if (1<=g<=10&&me==4&&o==7&&m>=15||1<=g<=10&&me==4&&o==8&&m<=59)
    return 2;
    else if (1<=g<=10&&me==4&&o==9&&m>=0||1<=g<=10&&me==4&&o==11&&m<=29)
    return 3;
    else if (1<=g<=10&&me==4&&o==11&&m>=30||1<=g<=10&&me==4&&o==14&&m<=14)
    return 4;
    else if (1<=g<=10&&me==4&&o==14&&m>=15||1<=g<=10&&me==4&&o==16&&m<=59)
    return 5;
    else if (1<=g<=10&&me==4&&o==17&&m>=0||1<=g<=10&&me==4&&o==19&&m<=44)
    return 6;
    else if (1<=g<=10&&me==4&&o==19&&m>=45||1<=g<=10&&me==4&&o==22&&m<=29)
    return 7;
    else if (1<=g<=10&&me==4&&o==22&&m>=30||1<=g<=10&&me==4&&o==0&&m<=59)
    return 8;
    else if (1<=g<=10&&me==4&&o==1&&m>=0||1<=g<=10&&me==4&&o==2&&m<=44)
    return 9;
    else if (1<=g<=10&&me==4&&o==2&&m>=45||1<=g<=10&&me==4&&o==3&&m<=59)
    return 10;
    else if (1<=g<=10&&me==4&&o==4&&m>=0||1<=g<=10&&me==4&&o==4&&m<=59)
    return 11;
    else if (1<=g<=10&&me==4&&o==5&&m>=0||1<=g<=10&&me==4&&o==5&&m<=59)
    return 12;
    //ariete 1-10 / 04
    //ariete 11-20 / 04
    if (11<=g<=20&&me==4&&o==5&&m>=15||11<=g<=20&&me==4&&o==6&&m<=29)
    return 1;
    else if (11<=g<=20&&me==4&&o==6&&m>=30||11<=g<=20&&me==4&&o==8&&m<=14)
    return 2;
    else if (11<=g<=20&&me==4&&o==8&&m>=15||11<=g<=20&&me==4&&o==10&&m<=44)
    return 3;
    else if (11<=g<=20&&me==4&&o==10&&m>=45||11<=g<=20&&me==4&&o==13&&m<=29)
    return 4;
    else if (11<=g<=20&&me==4&&o==13&&m>=30||11<=g<=20&&me==4&&o==16&&m<=14)
    return 5;
    else if (11<=g<=20&&me==4&&o==16&&m>=15||11<=g<=20&&me==4&&o==18&&m<=59)
    return 6;
    else if (11<=g<=20&&me==4&&o==19&&m>=0||11<=g<=20&&me==4&&o==21&&m<=44)
    return 7;
    else if (11<=g<=20&&me==4&&o==21&&m>=45||11<=g<=20&&me==4&&o==0&&m<=14)
    return 8;
    else if (11<=g<=20&&me==4&&o==0&&m>=15||11<=g<=20&&me==4&&o==1&&m<=59)
    return 9;
    else if (11<=g<=20&&me==4&&o==2&&m>=0||11<=g<=20&&me==4&&o==3&&m<=14)
    return 10;
    else if (11<=g<=20&&me==4&&o==3&&m>=15||11<=g<=20&&me==4&&o==4&&m<=14)
    return 11;
    else if (11<=g<=20&&me==4&&o==4&&m>=15||11<=g<=20&&me==4&&o==5&&m<=14)
    return 12;
    //ariete 11-20 / 04
    //toro 21-31 / 04
    if (21<=g<=31&&me==4&&o==5&&m>=45||21<=g<=31&&me==4&&o==7&&m>=29)
    return 2;
    else if (21<=g<=31&&me==4&&o==7&&m>=30||21<=g<=31&&me==4&&o==9&&m>=59)
    return 3;
    else if (21<=g<=31&&me==4&&o==10&&m>=0||21<=g<=31&&me==4&&o==12&&m>=44)
    return 4;
    else if (21<=g<=31&&me==4&&o==12&&m>=45||21<=g<=31&&me==4&&o==15&&m>=29)
    return 5;
    else if (21<=g<=31&&me==4&&o==15&&m>=30||21<=g<=31&&me==4&&o==18&&m>=14)
    return 6;
    else if (21<=g<=31&&me==4&&o==18&&m>=15||21<=g<=31&&me==4&&o==20&&m>=59)
    return 7;
    else if (21<=g<=31&&me==4&&o==21&&m>=0||21<=g<=31&&me==4&&o==23&&m>=29)
    return 8;
    else if (21<=g<=31&&me==4&&o==23&&m>=30||21<=g<=31&&me==4&&o==1&&m>=14)
    return 9;
    else if (21<=g<=31&&me==4&&o==1&&m>=15||21<=g<=31&&me==4&&o==2&&m>=29)
    return 10;
    else if (21<=g<=31&&me==4&&o==2&&m>=30||21<=g<=31&&me==4&&o==3&&m>=29)
    return 11;
    else if (21<=g<=31&&me==4&&o==3&&m>=30||21<=g<=31&&me==4&&o==4&&m>=29)
    return 12;
    else if (21<=g<=31&&me==4&&o==4&&m>=30||21<=g<=31&&me==4&&o==5&&m>=44)
    return 1;
    //toro 21-31 / 04
    //toro 1-10 / 05
    if (1<=g<=10&&me==5&&o==5&&m>=15||1<=g<=10&&me==5&&o==6&&m<=59)
    return 2;
    else if (1<=g<=10&&me==5&&o==7&&m>=0||1<=g<=10&&me==5&&o==9&&m<=29)
    return 3;
    else if (1<=g<=10&&me==5&&o==9&&m>=30||1<=g<=10&&me==5&&o==12&&m<=14)
    return 4;
    else if (1<=g<=10&&me==5&&o==12&&m>=15||1<=g<=10&&me==5&&o==14&&m<=59)
    return 5;
    else if (1<=g<=10&&me==5&&o==15&&m>=0||1<=g<=10&&me==5&&o==17&&m<=44)
    return 6;
    else if (1<=g<=10&&me==5&&o==17&&m>=45||1<=g<=10&&me==5&&o==20&&m<=29)
    return 7;
    else if (1<=g<=10&&me==5&&o==20&&m>=30||1<=g<=10&&me==5&&o==22&&m<=59)
    return 8;
    else if (1<=g<=10&&me==5&&o==23&&m>=0||1<=g<=10&&me==5&&o==0&&m<=44)
    return 9;
    else if (1<=g<=10&&me==5&&o==0&&m>=45||1<=g<=10&&me==5&&o==1&&m<=59)
    return 10;
    else if (1<=g<=10&&me==5&&o==2&&m>=0||1<=g<=10&&me==5&&o==2&&m<=59)
    return 11;
    else if (1<=g<=10&&me==5&&o==3&&m>=0||1<=g<=10&&me==5&&o==3&&m<=59)
    return 12;
    else if (1<=g<=10&&me==5&&o==4&&m>=0||1<=g<=10&&me==5&&o==5&&m<=14)
    return 1;
    //toro 1-10 / 05
    //toro 11-21 / 05
    if (11<=g<=21&&me==5&&o==4&&m>=45||11<=g<=21&&me==5&&o==6&&m<=29)
    return 2;
    else if (11<=g<=21&&me==5&&o==6&&m>=30||11<=g<=21&&me==5&&o==8&&m<=59)
    return 3;
    else if (11<=g<=21&&me==5&&o==9&&m>=0||11<=g<=21&&me==5&&o==11&&m<=44)
    return 4;
    else if (11<=g<=21&&me==5&&o==11&&m>=45||11<=g<=21&&me==5&&o==14&&m<=29)
    return 5;
    else if (11<=g<=21&&me==5&&o==14&&m>=30||11<=g<=21&&me==5&&o==17&&m<=14)
    return 6;
    else if (11<=g<=21&&me==5&&o==17&&m>=15||11<=g<=21&&me==5&&o==19&&m<=59)
    return 7;
    else if (11<=g<=21&&me==5&&o==20&&m>=0||11<=g<=21&&me==5&&o==22&&m<=29)
    return 8;
    else if (11<=g<=21&&me==5&&o==22&&m>=30||11<=g<=21&&me==5&&o==0&&m<=14)
    return 9;
    else if (11<=g<=21&&me==5&&o==0&&m>=15||11<=g<=21&&me==5&&o==1&&m<=29)
    return 10;
    else if (11<=g<=21&&me==5&&o==1&&m>=30||11<=g<=21&&me==5&&o==2&&m<=29)
    return 11;
    else if (11<=g<=21&&me==5&&o==2&&m>=30||11<=g<=21&&me==5&&o==3&&m<=29)
    return 12;
    else if (11<=g<=21&&me==5&&o==3&&m>=30||11<=g<=21&&me==5&&o==4&&m<=44)
    return 1;
    //toro 11-21 / 05
    //gemelli 22-31 / 05
    if (22<=g<=31&&me==5&&o==6&&m>=0||22<=g<=31&&me==5&&o==8&&m<=29)
    return 3;
    else if (22<=g<=31&&me==5&&o==8&&m>=30||22<=g<=31&&me==5&&o==11&&m<=14)
    return 4;
    else if (22<=g<=31&&me==5&&o==11&&m>=15||22<=g<=31&&me==5&&o==13&&m<=59)
    return 5;
    else if (22<=g<=31&&me==5&&o==14&&m>=0||22<=g<=31&&me==5&&o==16&&m<=44)
    return 6;
    else if (22<=g<=31&&me==5&&o==16&&m>=45||22<=g<=31&&me==5&&o==19&&m<=29)
    return 7;
    else if (22<=g<=31&&me==5&&o==19&&m>=30||22<=g<=31&&me==5&&o==21&&m<=59)
    return 8;
    else if (22<=g<=31&&me==5&&o==22&&m>=0||22<=g<=31&&me==5&&o==23&&m<=44)
    return 9;
    else if (22<=g<=31&&me==5&&o==23&&m>=45||22<=g<=31&&me==5&&o==0&&m<=59)
    return 10;
    else if (22<=g<=31&&me==5&&o==1&&m>=0||22<=g<=31&&me==5&&o==1&&m<=59)
    return 11;
    else if (22<=g<=31&&me==5&&o==2&&m>=0||22<=g<=31&&me==5&&o==2&&m<=59)
    return 12;
    else if (22<=g<=31&&me==5&&o==3&&m>=0||22<=g<=31&&me==5&&o==4&&m<=14)
    return 1;
    else if (22<=g<=31&&me==5&&o==4&&m>=15||22<=g<=31&&me==5&&o==5&&m<=29)
    //gemelli 22-31 / 05
    //gemelli 1-10 / 06
    if (1<=g<=10&&me==6&&o==5&&m>=30||1<=g<=10&&me==6&&o==7&&m<=59)
    return 3;
    else if (1<=g<=10&&me==6&&o==8&&m>=0||1<=g<=10&&me==6&&o==10&&m<=44)
    return 4;
    else if (1<=g<=10&&me==6&&o==10&&m>=45||1<=g<=10&&me==6&&o==13&&m<=29)
    return 5;
    else if (1<=g<=10&&me==6&&o==13&&m>=30||1<=g<=10&&me==6&&o==16&&m<=14)
    return 6;
    else if (1<=g<=10&&me==6&&o==16&&m>=15||1<=g<=10&&me==6&&o==18&&m<=59)
    return 7;
    else if (1<=g<=10&&me==6&&o==19&&m>=0||1<=g<=10&&me==6&&o==21&&m<=29)
    return 8;
    else if (1<=g<=10&&me==6&&o==21&&m>=30||1<=g<=10&&me==6&&o==23&&m<=14)
    return 9;
    else if (1<=g<=10&&me==6&&o==23&&m>=15||1<=g<=10&&me==6&&o==0&&m<=29)
    return 10;
    else if (1<=g<=10&&me==6&&o==0&&m>=30||1<=g<=10&&me==6&&o==1&&m<=29)
    return 11;
    else if (1<=g<=10&&me==6&&o==1&&m>=30||1<=g<=10&&me==6&&o==2&&m<=29)
    return 12;
    else if (1<=g<=10&&me==6&&o==2&&m>=30||1<=g<=10&&me==6&&o==3&&m<=44)
    return 1;
    else if (1<=g<=10&&me==6&&o==3&&m>=45||1<=g<=10&&me==6&&o==5&&m<=29)
    return 2;
    //gemelli 1-10 / 06
    //gemelli 11-21 / 06
    if (11<=g<=21&&me==6&&o==4&&m>=45||11<=g<=21&&me==6&&o==7&&m<=14)
    return 3;
    else if (11<=g<=21&&me==6&&o==7&&m>=15||11<=g<=21&&me==6&&o==9&&m<=59)
    return 4;
    else if (11<=g<=21&&me==6&&o==10&&m>=0||11<=g<=21&&me==6&&o==12&&m<=44)
    return 5;
    else if (11<=g<=21&&me==6&&o==12&&m>=45||11<=g<=21&&me==6&&o==15&&m<=29)
    return 6;
    else if (11<=g<=21&&me==6&&o==15&&m>=30||11<=g<=21&&me==6&&o==18&&m<=14)
    return 7;
    else if (11<=g<=21&&me==6&&o==18&&m>=15||11<=g<=21&&me==6&&o==20&&m<=44)
    return 8;
    else if (11<=g<=21&&me==6&&o==20&&m>=45||11<=g<=21&&me==6&&o==22&&m<=29)
    return 9;
    else if (11<=g<=21&&me==6&&o==22&&m>=30||11<=g<=21&&me==6&&o==23&&m<=44)
    return 10;
    else if (11<=g<=21&&me==6&&o==23&&m>=45||11<=g<=21&&me==6&&o==0&&m<=44)
    return 11;
    else if (11<=g<=21&&me==6&&o==0&&m>=45||11<=g<=21&&me==6&&o==1&&m<=44)
    return 12;
    else if (11<=g<=21&&me==6&&o==1&&m>=45||11<=g<=21&&me==6&&o==2&&m<=59)
    return 1;
    else if (11<=g<=21&&me==6&&o==3&&m>=0||11<=g<=21&&me==6&&o==4&&m<=44)
    return 2;
    //gemelli 11-21 / 06
    //cancro 22-30 / 06
    else if (22<=g<=30&&me==6&&o==6&&m>=30||22<=g<=30&&me==6&&o==9&&m<=14)
    return 4;
    else if (22<=g<=30&&me==6&&o==9&&m>=15||22<=g<=30&&me==6&&o==11&&m<=59)
    return 5;
    else if (22<=g<=30&&me==6&&o==12&&m>=0||22<=g<=30&&me==6&&o==14&&m<=44)
    return 6;
    else if (22<=g<=30&&me==6&&o==14&&m>=45||22<=g<=30&&me==6&&o==17&&m<=29)
    return 7;
    else if (22<=g<=30&&me==6&&o==17&&m>=30||22<=g<=30&&me==6&&o==19&&m<=59)
    return 8;
    else if (22<=g<=30&&me==6&&o==20&&m>=0||22<=g<=30&&me==6&&o==21&&m<=44)
    return 9;
    else if (22<=g<=30&&me==6&&o==21&&m>=45||22<=g<=30&&me==6&&o==22&&m<=59)
    return 10;
    else if (22<=g<=30&&me==6&&o==23&&m>=0||22<=g<=30&&me==6&&o==23&&m<=59)
    return 11;
    else if (22<=g<=30&&me==6&&o==0&&m>=0||22<=g<=30&&me==6&&o==0&&m<=59)
    return 12;
    else if (22<=g<=30&&me==6&&o==1&&m>=0||22<=g<=30&&me==6&&o==2&&m<=14)
    return 1;
    else if (22<=g<=30&&me==6&&o==2&&m>=15||22<=g<=30&&me==6&&o==3&&m<=59)
    return 2;
    else if (22<=g<=30&&me==6&&o==4&&m>=0||22<=g<=30&&me==6&&o==6&&m<=29)
    return 3;
    //cancro 22-30 / 06
    //cancco 1-11 / 07
    if (1<=g<=11&&me==7&&o==6&&m>=0||1<=g<=11&&me==7&&o==8&&m<=44)
    return 4;
    else if (1<=g<=11&&me==7&&o==8&&m>=45||1<=g<=11&&me==7&&o==11&&m<=29)
    return 5;
    else if (1<=g<=11&&me==7&&o==11&&m>=30||1<=g<=11&&me==7&&o==14&&m<=14)
    return 6;
    else if (1<=g<=11&&me==7&&o==14&&m>=15||1<=g<=11&&me==7&&o==16&&m<=59)
    return 7;
    else if (1<=g<=11&&me==7&&o==17&&m>=0||1<=g<=11&&me==7&&o==19&&m<=29)
    return 8;
    else if (1<=g<=11&&me==7&&o==19&&m>=30||1<=g<=11&&me==7&&o==21&&m<=14)
    return 9;
    else if (1<=g<=11&&me==7&&o==21&&m>=15||1<=g<=11&&me==7&&o==22&&m<=29)
    return 10;
    else if (1<=g<=11&&me==7&&o==22&&m>=30||1<=g<=11&&me==7&&o==23&&m<=29)
    return 11;
    else if (1<=g<=11&&me==7&&o==23&&m>=30||1<=g<=11&&me==7&&o==0&&m<=29)
    return 12;
    else if (1<=g<=11&&me==7&&o==0&&m>=30||1<=g<=11&&me==7&&o==1&&m<=44)
    return 1;
    else if (1<=g<=11&&me==7&&o==1&&m>=45||1<=g<=11&&me==7&&o==3&&m<=29)
    return 2;
    else if (1<=g<=11&&me==7&&o==3&&m>=30||1<=g<=11&&me==7&&o==5&&m<=59)
    return 3;
    //cancro 1-11 / 07
    //cancro 12-22 / 07
    if (12<=g<=22&&me==7&&o==5&&m>=30||12<=g<=22&&me==7&&o==8&&m<=14)
    return 4;
    else if (12<=g<=22&&me==7&&o==8&&m>=15||12<=g<=22&&me==7&&o==10&&m<=59)
    return 5;
    else if (12<=g<=22&&me==7&&o==11&&m>=0||12<=g<=22&&me==7&&o==13&&m<=44)
    return 6;
    else if (12<=g<=22&&me==7&&o==13&&m>=45||12<=g<=22&&me==7&&o==16&&m<=29)
    return 7;
    else if (12<=g<=22&&me==7&&o==16&&m>=30||12<=g<=22&&me==7&&o==18&&m<=59)
    return 8;
    else if (12<=g<=22&&me==7&&o==19&&m>=0||12<=g<=22&&me==7&&o==20&&m<=44)
    return 9;
    else if (12<=g<=22&&me==7&&o==20&&m>=45||12<=g<=22&&me==7&&o==21&&m<=59)
    return 10;
    else if (12<=g<=22&&me==7&&o==22&&m>=0||12<=g<=22&&me==7&&o==22&&m<=59)
    return 11;
    else if (12<=g<=22&&me==7&&o==23&&m>=0||12<=g<=22&&me==7&&o==23&&m<=59)
    return 12;
    else if (12<=g<=22&&me==7&&o==0&&m>=0||12<=g<=22&&me==7&&o==1&&m<=14)
    return 1;
    else if (12<=g<=22&&me==7&&o==1&&m>=15||12<=g<=22&&me==7&&o==2&&m<=59)
    return 2;
    else if (12<=g<=22&&me==7&&o==3&&m>=0||12<=g<=22&&me==7&&o==5&&m<=29)
    return 3;
    //cancro 12-22 / 07
    //leone 23-31 / 07
    if (23<=g<=31&&me==7&&o==7&&m>=0||23<=g<=31&&me==7&&o==9&&m<=44)
    return 5;
    else if (23<=g<=31&&me==7&&o==9&&m>=45||23<=g<=31&&me==7&&o==12&&m<=29)
    return 6;
    else if (23<=g<=31&&me==7&&o==12&&m>=30||23<=g<=31&&me==7&&o==15&&m<=14)
    return 7;
    else if (23<=g<=31&&me==7&&o==15&&m>=15||23<=g<=31&&me==7&&o==17&&m<=44)
    return 8;
    else if (23<=g<=31&&me==7&&o==17&&m>=45||23<=g<=31&&me==7&&o==19&&m<=29)
    return 9;
    else if (23<=g<=31&&me==7&&o==19&&m>=30||23<=g<=31&&me==7&&o==20&&m<=44)
    return 10;
    else if (23<=g<=31&&me==7&&o==20&&m>=45||23<=g<=31&&me==7&&o==21&&m<=44)
    return 11;
    else if (23<=g<=31&&me==7&&o==21&&m>=45||23<=g<=31&&me==7&&o==22&&m<=44)
    return 12;
    else if (23<=g<=31&&me==7&&o==22&&m>=45||23<=g<=31&&me==7&&o==23&&m<=59)
    return 1;
    else if (23<=g<=31&&me==7&&o==0&&m>=0||23<=g<=31&&me==7&&o==1&&m<=44)
    return 2;
    else if (23<=g<=31&&me==7&&o==1&&m>=45||23<=g<=31&&me==7&&o==4&&m<=14)
    return 3;
    else if (23<=g<=31&&me==7&&o==4&&m>=15||23<=g<=31&&me==7&&o==6&&m<=59)
    return 4;
    //leone 23-31 / 07
    //leone 1-11 / 08
    if (1<=g<=11&&me==8&&o==6&&m>=30||1<=g<=11&&me==8&&o==9&&m<=14)
    return 5;
    else if (1<=g<=11&&me==8&&o==9&&m>=15||1<=g<=11&&me==8&&o==11&&m<=59)
    return 6;
    else if (1<=g<=11&&me==8&&o==12&&m>=0||1<=g<=11&&me==8&&o==14&&m<=44)
    return 7;
    else if (1<=g<=11&&me==8&&o==14&&m>=45||1<=g<=11&&me==8&&o==17&&m<=14)
    return 8;
    else if (1<=g<=11&&me==8&&o==17&&m>=15||1<=g<=11&&me==8&&o==18&&m<=59)
    return 9;
    else if (1<=g<=11&&me==8&&o==19&&m>=0||1<=g<=11&&me==8&&o==20&&m<=14)
    return 10;
    else if (1<=g<=11&&me==8&&o==20&&m>=15||1<=g<=11&&me==8&&o==21&&m<=14)
    return 11;
    else if (1<=g<=11&&me==8&&o==21&&m>=15||1<=g<=11&&me==8&&o==22&&m<=14)
    return 12;
    else if (1<=g<=11&&me==8&&o==22&&m>=15||1<=g<=11&&me==8&&o==23&&m<=29)
    return 1;
    else if (1<=g<=11&&me==8&&o==23&&m>=30||1<=g<=11&&me==8&&o==1&&m<=14)
    return 2;
    else if (1<=g<=11&&me==8&&o==1&&m>=15||1<=g<=11&&me==8&&o==3&&m<=44)
    return 3;
    else if (1<=g<=11&&me==8&&o==3&&m>=45||1<=g<=11&&me==8&&o==6&&m<=29)
    return 4;
    //leone 1-11 / 08
    //leone 12-23 / 08
    if (12<=g<=23&&me==8&&o==5&&m>=45||12<=g<=23&&me==8&&o==8&&m<=29)
    return 5;
    else if (12<=g<=23&&me==8&&o==8&&m>=30||12<=g<=23&&me==8&&o==11&&m<=14)
    return 6;
    else if (12<=g<=23&&me==8&&o==11&&m>=15||12<=g<=23&&me==8&&o==13&&m<=59)
    return 7;
    else if (12<=g<=23&&me==8&&o==14&&m>=0||12<=g<=23&&me==8&&o==16&&m<=29)
    return 8;
    else if (12<=g<=23&&me==8&&o==16&&m>=30||12<=g<=23&&me==8&&o==18&&m<=14)
    return 9;
    else if (12<=g<=23&&me==8&&o==18&&m>=15||12<=g<=23&&me==8&&o==19&&m<=29)
    return 10;
    else if (12<=g<=23&&me==8&&o==19&&m>=30||12<=g<=23&&me==8&&o==20&&m<=29)
    return 11;
    else if (12<=g<=23&&me==8&&o==20&&m>=30||12<=g<=23&&me==8&&o==21&&m<=29)
    return 12;
    else if (12<=g<=23&&me==8&&o==21&&m>=30||12<=g<=23&&me==8&&o==22&&m<=44)
    return 1;
    else if (12<=g<=23&&me==8&&o==22&&m>=45||12<=g<=23&&me==8&&o==0&&m<=29)
    return 2;
    else if (12<=g<=23&&me==8&&o==0&&m>=30||12<=g<=23&&me==8&&o==2&&m<=59)
    return 3;
    else if (12<=g<=23&&me==8&&o==3&&m>=0||12<=g<=23&&me==8&&o==5&&m<=44)
    return 4;
    //leone 12-23 / 08
    //vergine 24-31 / 08
    if (24<=g<=31&&me==8&&o==7&&m>=30||24<=g<=31&&me==8&&o==10&&m<=14)
    return 6;
    else if (24<=g<=31&&me==8&&o==10&&m>=15||24<=g<=31&&me==8&&o==12&&m<=59)
    return 7;
    else if (24<=g<=31&&me==8&&o==13&&m>=0||24<=g<=31&&me==8&&o==15&&m<=29)
    return 8;
    else if (24<=g<=31&&me==8&&o==15&&m>=30||24<=g<=31&&me==8&&o==17&&m<=14)
    return 9;
    else if (24<=g<=31&&me==8&&o==17&&m>=15||24<=g<=31&&me==8&&o==18&&m<=29)
    return 10;
    else if (24<=g<=31&&me==8&&o==18&&m>=30||24<=g<=31&&me==8&&o==19&&m<=29)
    return 11;
    else if (24<=g<=31&&me==8&&o==19&&m>=30||24<=g<=31&&me==8&&o==20&&m<=29)
    return 12;
    else if (24<=g<=31&&me==8&&o==20&&m>=30||24<=g<=31&&me==8&&o==21&&m<=44)
    return 1;
    else if (24<=g<=31&&me==8&&o==21&&m>=45||24<=g<=31&&me==8&&o==23&&m<=29)
    return 2;
    else if (24<=g<=31&&me==8&&o==23&&m>=30||24<=g<=31&&me==8&&o==1&&m<=59)
    return 3;
    else if (24<=g<=31&&me==8&&o==2&&m>=0||24<=g<=31&&me==8&&o==4&&m<=44)
    return 4;
    else if (24<=g<=31&&me==8&&o==4&&m>=45||24<=g<=31&&me==8&&o==7&&m<=29)
    return 5;
    //vergine 24-31 /08
    //vergine 1-11 / 09
    if (1<=g<=11&&me==9&&o==7&&m>=0||1<=g<=11&&me==9&&o==9&&m<=44)
    return 6;
    else if (1<=g<=11&&me==9&&o==9&&m>=45||1<=g<=11&&me==9&&o==12&&m<=29)
    return 7;
    else if (1<=g<=11&&me==9&&o==12&&m>=30||1<=g<=11&&me==9&&o==14&&m<=59)
    return 8;
    else if (1<=g<=11&&me==9&&o==15&&m>=0||1<=g<=11&&me==9&&o==16&&m<=44)
    return 9;
    else if (1<=g<=11&&me==9&&o==16&&m>=45||1<=g<=11&&me==9&&o==17&&m<=59)
    return 10;
    else if (1<=g<=11&&me==9&&o==18&&m>=0||1<=g<=11&&me==9&&o==18&&m<=59)
    return 11;
    else if (1<=g<=11&&me==9&&o==19&&m>=0||1<=g<=11&&me==9&&o==19&&m<=59)
    return 12;
    else if (1<=g<=11&&me==9&&o==20&&m>=0||1<=g<=11&&me==9&&o==21&&m<=14)
    return 1;
    else if (1<=g<=11&&me==9&&o==21&&m>=15||1<=g<=11&&me==9&&o==22&&m<=59)
    return 2;
    else if (1<=g<=11&&me==9&&o==23&&m>=0||1<=g<=11&&me==9&&o==1&&m<=29)
    return 3;
    else if (1<=g<=11&&me==9&&o==1&&m>=30||1<=g<=11&&me==9&&o==4&&m<=14)
    return 4;
    else if (1<=g<=11&&me==9&&o==4&&m>=15||1<=g<=11&&me==9&&o==6&&m<=59)
    return 5;
    //vergine 1-11 / 09
    //vergine 12-22 / 09
    if (12<=g<=22&&me==9&&o==4&&m>=15||12<=g<=22&&me==9&&o==8&&m<=59)
    return 6;
    else if (12<=g<=22&&me==9&&o==9&&m>=0||12<=g<=22&&me==9&&o==11&&m<=14)
    return 7;
    else if (12<=g<=22&&me==9&&o==11&&m>=15||12<=g<=22&&me==9&&o==14&&m<=14)
    return 8;
    else if (12<=g<=22&&me==9&&o==14&&m>=15||12<=g<=22&&me==9&&o==15&&m<=59)
    return 9;
    else if (12<=g<=22&&me==9&&o==16&&m>=0||12<=g<=22&&me==9&&o==17&&m<=14)
    return 10;
    else if (12<=g<=22&&me==9&&o==17&&m>=15||12<=g<=22&&me==9&&o==18&&m<=14)
    return 11;
    else if (12<=g<=22&&me==9&&o==18&&m>=15||12<=g<=22&&me==9&&o==19&&m<=14)
    return 12;
    else if (12<=g<=22&&me==9&&o==19&&m>=15||12<=g<=22&&me==9&&o==20&&m<=29)
    return 1;
    else if (12<=g<=22&&me==9&&o==20&&m>=30||12<=g<=22&&me==9&&o==22&&m<=14)
    return 2;
    else if (12<=g<=22&&me==9&&o==22&&m>=15||12<=g<=22&&me==9&&o==0&&m<=44)
    return 3;
    else if (12<=g<=22&&me==9&&o==0&&m>=45||12<=g<=22&&me==9&&o==3&&m<=29)
    return 4;
    else if (12<=g<=22&&me==9&&o==3&&m>=30||12<=g<=22&&me==9&&o==4&&m<=14)
    return 5;
    //vergine 12-22 / 09
    //PESCI
    if (19<=g<=30&&me==2&&o==7&&m>=30||19<=g<=30&&me==2&&o==8&&m<=29)
    return 12;
    else if (19<=g<=30&&me==2&&o==8&&m>=30||19<=g<=30&&me==2&&o==9&&m>=44)
    return 1;
    else if (19<=g<=30&&me==2&&o==9&&m>=45||19<=g<=30&&me==2&&o==11&&m>=29)
    return 2;
    else if (19<=g<=30&&me==2&&o==11&&m>=30||19<=g<=30&&me==2&&o==13&&m>=59)
    return 3;
    else if (19<=g<=30&&me==2&&o==14&&m>=00||19<=g<=30&&me==2&&o==16&&m>=44)
    return 4;
    else if (19<=g<=30&&me==2&&o==16&&m>=45||19<=g<=30&&me==2&&o==19&&m>=29)
    return 5;
    else if (19<=g<=30&&me==2&&o==19&&m>=30||19<=g<=30&&me==2&&o==22&&m>=14)
    return 6;
    else if (19<=g<=30&&me==2&&o==22&&m>=15||19<=g<=30&&me==2&&o==0&&m>=59)
    return 7;
    else if (19<=g<=30&&me==2&&o==1&&m>=00||19<=g<=30&&me==2&&o==3&&m>=29)
    return 8;
    else if (19<=g<=30&&me==2&&o==3&&m>=30||19<=g<=30&&me==2&&o==5&&m>=14)
    return 9;
    else if (19<=g<=30&&me==2&&o==5&&m>=15||19<=g<=30&&me==2&&o==6&&m>=29)
    return 10;
    else if (19<=g<=30&&me==2&&o==6&&m>=30||19<=g<=30&&me==2&&o==7&&m>=29)
    return 11;

    if (2<=g<=10&&me==3&&o==7&&m>=15||2<=g<=10&&me==3&&o==8&&m>=14)
    return 12;
    else if (2<=g<=10&&me==3&&o==8&&m>=15||2<=g<=10&&me==3&&o==9&&m>=29)
    return 1;
    else if (2<=g<=10&&me==3&&o==9&&m>=30||2<=g<=10&&me==3&&o==11&&m>=14)
    return 2;
    else if (2<=g<=10&&me==3&&o==11&&m>=15||2<=g<=10&&me==3&&o==13&&m>=44)
    return 3;
    else if (2<=g<=10&&me==3&&o==13&&m>=45||2<=g<=10&&me==3&&o==16&&m>=29)
    return 4;
    else if (2<=g<=10&&me==3&&o==16&&m>=30||2<=g<=10&&me==3&&o==19&&m>=14)
    return 5;
    else if (2<=g<=10&&me==3&&o==19&&m>=15||2<=g<=10&&me==3&&o==21&&m>=59)
    return 6;
    else if (2<=g<=10&&me==3&&o==22&&m>=00||2<=g<=10&&me==3&&o==0&&m>=44)
    return 7;
    else if (2<=g<=10&&me==3&&o==0&&m>=45||2<=g<=10&&me==3&&o==3&&m>=14)
    return 8;
    else if (2<=g<=10&&me==3&&o==3&&m>=15||2<=g<=10&&me==3&&o==4&&m>=59)
    return 9;
    else if (2<=g<=10&&me==3&&o==5&&m>=00||2<=g<=10&&me==3&&o==6&&m>=14)
    return 10;
    else if (2<=g<=10&&me==3&&o==6&&m>=15||2<=g<=10&&me==3&&o==7&&m>=14)
    return 11;

    if (11<=g<=20&&me==3&&o==6&&m>=30||11<=g<=20&&me==3&&o==7&&m>=29)
    return 12;
    else if (11<=g<=20&&me==3&&o==7&&m>=30||11<=g<=20&&me==3&&o==8&&m>=44)
    return 1;
    else if (11<=g<=20&&me==3&&o==8&&m>=45||11<=g<=20&&me==3&&o==10&&m>=29)
    return 2;
    else if (11<=g<=20&&me==3&&o==10&&m>=30||11<=g<=20&&me==3&&o==12&&m>=59)
    return 3;
    else if (11<=g<=20&&me==3&&o==13&&m>=00||11<=g<=20&&me==3&&o==15&&m>=44)
    return 4;
    else if (11<=g<=20&&me==3&&o==15&&m>=45||11<=g<=20&&me==3&&o==18&&m>=29)
    return 5;
    else if (11<=g<=20&&me==3&&o==18&&m>=30||11<=g<=20&&me==3&&o==21&&m>=14)
    return 6;
    else if (11<=g<=20&&me==3&&o==21&&m>=15||11<=g<=20&&me==3&&o==23&&m>=59)
    return 7;
    else if (11<=g<=20&&me==3&&o==0&&m>=00||11<=g<=20&&me==3&&o==2&&m>=29)
    return 8;
    else if (11<=g<=20&&me==3&&o==2&&m>=30||11<=g<=20&&me==3&&o==4&&m>=14)
    return 9;
    else if (11<=g<=20&&me==3&&o==4&&m>=15||11<=g<=20&&me==3&&o==5&&m>=29)
    return 10;
    else if (11<=g<=20&&me==3&&o==5&&m>=30||11<=g<=20&&me==3&&o==6&&m>=29)
    return 11;




    //AQUARIO

    if (21<=g<=31&&me==1&&o==8&&m>=30||21<=g<=31&&me==1&&o==9&&m>=29)
    return 11;
    else if (21<=g<=31&&me==1&&o==9&&m>=30||21<=g<=31&&me==1&&o==10&&m>=29)
    return 12;
    else if (21<=g<=31&&me==1&&o==10&&m>=30||21<=g<=31&&me==1&&o==11&&m>=44)
    return 1;
    else if (21<=g<=31&&me==1&&o==11&&m>=45||21<=g<=31&&me==1&&o==13&&m>=29)
    return 2;
    else if (21<=g<=31&&me==1&&o==13&&m>=30||21<=g<=31&&me==1&&o==15&&m>=59)
    return 3;
    else if (21<=g<=31&&me==1&&o==16&&m>=00||21<=g<=31&&me==1&&o==18&&m>=44)
    return 4;
    else if (21<=g<=31&&me==1&&o==18&&m>=45||21<=g<=31&&me==1&&o==21&&m>=29)
    return 5;
    else if (21<=g<=31&&me==1&&o==21&&m>=30||21<=g<=31&&me==1&&o==0&&m>=14)
    return 6;
    else if (21<=g<=31&&me==1&&o==0&&m>=15||21<=g<=31&&me==1&&o==2&&m>=59)
    return 7;
    else if (21<=g<=31&&me==1&&o==3&&m>=00||21<=g<=31&&me==1&&o==5&&m>=29)
    return 8;
    else if (21<=g<=31&&me==1&&o==5&&m>=30||21<=g<=31&&me==1&&o==7&&m>=14)
    return 9;
    else if (21<=g<=31&&me==1&&o==7&&m>=15||21<=g<=31&&me==1&&o==8&&m>=29)
    return 10;


    if (1<=g<=10&&me==2&&o==8&&m>=00||1<=g<=10&&me==2&&o==8&&m>=59)
    return 11;
    else if (1<=g<=10&&me==2&&o==9&&m>=00||1<=g<=10&&me==2&&o==9&&m>=59)
    return 12;
    else if (1<=g<=10&&me==2&&o==10&&m>=00||1<=g<=10&&me==2&&o==11&&m>=14)
    return 1;
    else if (1<=g<=10&&me==2&&o==11&&m>=15||1<=g<=10&&me==2&&o==12&&m>=59)
    return 2;
    else if (1<=g<=10&&me==2&&o==13&&m>=00||1<=g<=10&&me==2&&o==15&&m>=29)
    return 3;
     else if (1<=g<=10&&me==2&&o==15&&m>=30||1<=g<=10&&me==2&&o==18&&m>=14)
    return 4;
     else if (1<=g<=10&&me==2&&o==18&&m>=15||1<=g<=10&&me==2&&o==20&&m>=59)
    return 5;
    else if (1<=g<=10&&me==2&&o==21&&m>=00||1<=g<=10&&me==2&&o==23&&m>=44)
    return 6;
    else if (1<=g<=10&&me==2&&o==23&&m>=45||1<=g<=10&&me==2&&o==2&&m>=29)
    return 7;
    else if (1<=g<=10&&me==2&&o==2&&m>=30||1<=g<=10&&me==2&&o==4&&m>=59)
    return 8;
    else if (1<=g<=10&&me==2&&o==5&&m>=00||1<=g<=10&&me==2&&o==6&&m>=44)
    return 9;
    else if (1<=g<=10&&me==2&&o==6&&m>=45||1<=g<=10&&me==2&&o==7&&m>=59)
    return 10;



    if (11<=g<=18&&me==2&&o==7&&m>=15||11<=g<=18&&me==2&&o==8&&m>=14)
    return 11;
    else if (11<=g<=18&&me==2&&o==8&&m>=15||11<=g<=18&&me==2&&o==9&&m>=14)
    return 12;
    else if (11<=g<=18&&me==2&&o==9&&m>=15||11<=g<=18&&me==2&&o==10&&m>=29)
    return 1;
    else if (11<=g<=18&&me==2&&o==10&&m>=30||11<=g<=18&&me==2&&o==12&&m>=14)
    return 2;
    else if (11<=g<=18&&me==2&&o==12&&m>=15||11<=g<=18&&me==2&&o==14&&m>=44)
    return 3;
    else if (11<=g<=18&&me==2&&o==14&&m>=45||11<=g<=18&&me==2&&o==17&&m>=29)
    return 4;
    else if (11<=g<=18&&me==2&&o==17&&m>=30||11<=g<=18&&me==2&&o==21&&m>=14)
    return 5;
    else if (11<=g<=18&&me==2&&o==20&&m>=15||11<=g<=18&&me==2&&o==22&&m>=59)
    return 6;
    else if (11<=g<=18&&me==2&&o==23&&m>=00||11<=g<=18&&me==2&&o==1&&m>=44)
    return 7;
    else if (11<=g<=18&&me==2&&o==1&&m>=45||11<=g<=18&&me==2&&o==4&&m>=14)
    return 8;
    else if (11<=g<=18&&me==2&&o==4&&m>=15||11<=g<=18&&me==2&&o==5&&m>=59)
    return 9;
    else if (11<=g<=18&&me==2&&o==6&&m>=15||11<=g<=18&&me==2&&o==7&&m>=14)
    return 10;




    //CAPRICORNO

    if (22<=g<=31&&me==12&&o==9&&m>=00||22<=g<=31&&me==12&&o==10&&m>=14)
    return 10;
    else if (22<=g<=31&&me==12&&o==10&&m>=15||22<=g<=31&&me==12&&o==11&&m>=14)
    return 11;
    else if (22<=g<=31&&me==12&&o==11&&m>=15||22<=g<=31&&me==12&&o==12&&m>=14)
    return 12;
    else if (22<=g<=31&&me==12&&o==12&&m>=15||22<=g<=31&&me==12&&o==13&&m>=29)
    return 1;
    else if (22<=g<=31&&me==12&&o==13&&m>=30||22<=g<=31&&me==12&&o==15&&m>=14)
    return 2;
    else if (22<=g<=31&&me==12&&o==15&&m>=15||22<=g<=31&&me==12&&o==17&&m>=44)
    return 3;
    else if (22<=g<=31&&me==12&&o==17&&m>=45||22<=g<=31&&me==12&&o==20&&m>=29)
    return 4;
    else if (22<=g<=31&&me==12&&o==20&&m>=30||22<=g<=31&&me==12&&o==23&&m>=14)
    return 5;
    else if (22<=g<=31&&me==23&&o==9&&m>=15||22<=g<=31&&me==12&&o==1&&m>=59)
    return 6;
    else if (22<=g<=31&&me==12&&o==2&&m>=00||22<=g<=31&&me==12&&o==4&&m>=44)
    return 7;
    else if (22<=g<=31&&me==12&&o==4&&m>=45||22<=g<=31&&me==12&&o==7&&m>=14)
    return 8;
    else if (22<=g<=31&&me==12&&o==7&&m>=15||22<=g<=31&&me==12&&o==8&&m>=59)
    return 9;


    if (1<=g<=11&&me==1&&o==8&&m>=30||1<=g<=11&&me==1&&o==9&&m>=44)
    return 10;
    else if (1<=g<=11&&me==1&&o==9&&m>=45||1<=g<=11&&me==1&&o==10&&m>=44)
    return 11;
    else if (1<=g<=11&&me==1&&o==11&&m>=45||1<=g<=11&&me==1&&o==12&&m>=59)
    return 12;
    else if (1<=g<=11&&me==1&&o==9&&m>=00||1<=g<=11&&me==1&&o==10&&m>=14)
    return 1;
    else if (1<=g<=11&&me==1&&o==13&&m>=00||1<=g<=11&&me==1&&o==14&&m>=44)
    return 2;
    else if (1<=g<=11&&me==1&&o==14&&m>=45||1<=g<=11&&me==1&&o==17&&m>=14)
    return 3;
    else if (1<=g<=11&&me==1&&o==17&&m>=15||1<=g<=11&&me==1&&o==19&&m>=59)
    return 4;
    else if (1<=g<=11&&me==1&&o==20&&m>=00||1<=g<=11&&me==1&&o==22&&m>=44)
    return 5;
    else if (1<=g<=11&&me==1&&o==22&&m>=45||1<=g<=11&&me==1&&o==1&&m>=29)
    return 6;
    else if (1<=g<=11&&me==1&&o==1&&m>=30||1<=g<=11&&me==1&&o==4&&m>=14)
    return 7;
    else if (1<=g<=11&&me==1&&o==4&&m>=15||1<=g<=11&&me==1&&o==6&&m>=44)
    return 8;
    else if (1<=g<=11&&me==1&&o==6&&m>=45||1<=g<=11&&me==1&&o==8&&m>=29)
    return 9;
    if (12<=g<=20&&me==1&&o==8&&m>=00||12<=g<=20&&me==1&&o==9&&m>=14)
    return 10;
    else if (12<=g<=20&&me==1&&o==9&&m>=15||12<=g<=20&&me==1&&o==10&&m>=14)
    return 11;
    else if (12<=g<=20&&me==1&&o==10&&m>=15||12<=g<=20&&me==1&&o==11&&m>=14)
    return 12;
    else if (12<=g<=20&&me==1&&o==11&&m>=15||12<=g<=20&&me==1&&o==12&&m>=29)
    return 1;
    else if (12<=g<=20&&me==1&&o==12&&m>=30||12<=g<=20&&me==1&&o==14&&m>=14)
    return 2;
    else if (12<=g<=20&&me==1&&o==14&&m>=15||12<=g<=20&&me==1&&o==16&&m>=44)
    return 3;
    else if (12<=g<=20&&me==1&&o==16&&m>=45||12<=g<=20&&me==1&&o==19&&m>=29)
    return 4;
    else if (12<=g<=20&&me==1&&o==19&&m>=30||12<=g<=20&&me==1&&o==22&&m>=14)
    return 5;
    else if (12<=g<=20&&me==1&&o==22&&m>=15||12<=g<=20&&me==1&&o==00&&m>=59)
    return 6;
    else if (12<=g<=20&&me==1&&o==1&&m>=00||12<=g<=20&&me==1&&o==3&&m>=44)
    return 7;
    else if (12<=g<=20&&me==1&&o==3&&m>=45||12<=g<=20&&me==1&&o==6&&m>=14)
    return 8;
    else if (12<=g<=20&&me==1&&o==6&&m>=15||12<=g<=20&&me==1&&o==7&&m>=59)
    return 9;





    //SAGITTARIO


    if (23<=g<=30&&me==11&&o==9&&m>=30||23<=g<=30&&me==11&&o==11&&m>=44)
    return 9;
    else if (23<=g<=30&&me==11&&o==11&&m>=45||23<=g<=30&&me==11&&o==12&&m>=29)
    return 10;
    else if (23<=g<=30&&me==11&&o==12&&m>=30||23<=g<=30&&me==11&&o==13&&m>=29)
    return 11;
    else if (23<=g<=30&&me==11&&o==13&&m>=30||23<=g<=30&&me==11&&o==14&&m>=29)
    return 12;
    else if (23<=g<=30&&me==11&&o==14&&m>=30||23<=g<=30&&me==11&&o==15&&m>=44)
    return 1;
    else if (23<=g<=30&&me==11&&o==15&&m>=45||23<=g<=30&&me==11&&o==17&&m>=29)
    return 2;
    else if (23<=g<=30&&me==11&&o==17&&m>=30||23<=g<=30&&me==11&&o==19&&m>=59)
    return 3;
    else if (23<=g<=30&&me==11&&o==20&&m>=00||23<=g<=30&&me==11&&o==22&&m>=44)
    return 4;
    else if (23<=g<=30&&me==11&&o==22&&m>=45||23<=g<=30&&me==11&&o==1&&m>=29)
    return 5;
    else if (23<=g<=30&&me==11&&o==1&&m>=30||23<=g<=30&&me==11&&o==4&&m>=14)
    return 6;
    else if (23<=g<=30&&me==11&&o==4&&m>=15||23<=g<=30&&me==11&&o==6&&m>=59)
    return 7;
    else if (23<=g<=30&&me==11&&o==7&&m>=00||23<=g<=30&&me==11&&o==9&&m>=29)
    return 8;



    if (1<=g<=11&&me==12&&o==8&&m>=45||1<=g<=11&&me==12&&o==10&&m>=29)
    return 9;
    else if (1<=g<=11&&me==12&&o==10&&m>=30||1<=g<=11&&me==12&&o==11&&m>=44)
    return 10;
    else if (1<=g<=11&&me==12&&o==11&&m>=45||1<=g<=11&&me==12&&o==12&&m>=44)
    return 11;
    else if (1<=g<=11&&me==12&&o==12&&m>=45||1<=g<=11&&me==12&&o==13&&m>=44)
    return 12;
    else if (1<=g<=11&&me==12&&o==13&&m>=45||1<=g<=11&&me==12&&o==14&&m>=59)
    return 1;
    else if (1<=g<=11&&me==12&&o==15&&m>=00||1<=g<=11&&me==12&&o==16&&m>=44)
    return 2;
    else if (1<=g<=11&&me==12&&o==16&&m>=45||1<=g<=11&&me==12&&o==19&&m>=14)
    return 3;
    else if (1<=g<=11&&me==12&&o==19&&m>=15||1<=g<=11&&me==12&&o==21&&m>=59)
    return 4;
    else if (1<=g<=11&&me==12&&o==22&&m>=00||1<=g<=11&&me==12&&o==0&&m>=44)
    return 5;
    else if (1<=g<=11&&me==12&&o==0&&m>=45||1<=g<=11&&me==12&&o==3&&m>=29)
    return 6;
    else if (1<=g<=11&&me==12&&o==3&&m>=30||1<=g<=11&&me==12&&o==6&&m>=14)
    return 7;
    else if (1<=g<=11&&me==12&&o==6&&m>=15||1<=g<=11&&me==12&&o==8&&m>=44)
    return 8;



    if (12<=g<=21&&me==12&&o==8&&m>=15||12<=g<=21&&me==12&&o==9&&m>=59)
    return 9;
    else if (12<=g<=21&&me==12&&o==10&&m>=00||12<=g<=21&&me==12&&o==11&&m>=14)
    return 10;
    else if (12<=g<=21&&me==12&&o==11&&m>=15||12<=g<=21&&me==12&&o==12&&m>=14)
    return 11;
    else if (12<=g<=21&&me==12&&o==12&&m>=15||12<=g<=21&&me==12&&o==13&&m>=14)
    return 12;
    else if (12<=g<=21&&me==12&&o==13&&m>=15||12<=g<=21&&me==12&&o==14&&m>=29)
    return 1;
    else if (12<=g<=21&&me==12&&o==14&&m>=30||12<=g<=21&&me==12&&o==16&&m>=14)
    return 2;
    else if (12<=g<=21&&me==12&&o==16&&m>=15||12<=g<=21&&me==12&&o==18&&m>=44)
    return 3;
    else if (12<=g<=21&&me==12&&o==18&&m>=45||12<=g<=21&&me==12&&o==21&&m>=29)
    return 4;
    else if (12<=g<=21&&me==12&&o==21&&m>=30||12<=g<=21&&me==12&&o==0&&m>=14)
    return 5;
    else if (12<=g<=21&&me==12&&o==0&&m>=15||12<=g<=21&&me==12&&o==2&&m>=59)
    return 6;
    else if (12<=g<=21&&me==12&&o==3&&m>=00||12<=g<=21&&me==12&&o==5&&m>=44)
    return 7;
    else if (12<=g<=21&&me==12&&o==5&&m>=45||12<=g<=21&&me==12&&o==8&&m>=14)
    return 8;





    //SCORPIONE


    if (24<=g<=31&&me==10&&o==9&&m>=00||24<=g<=31&&me==10&&o==11&&m>=29)
    return 8;
    else if (24<=g<=31&&me==10&&o==11&&m>=30||24<=g<=31&&me==10&&o==13&&m>=14)
    return 9;
    else if (24<=g<=31&&me==10&&o==13&&m>=15||24<=g<=31&&me==10&&o==14&&m>=29)
    return 10;
    else if (24<=g<=31&&me==10&&o==14&&m>=30||24<=g<=31&&me==10&&o==11&&m>=29)
    return 11;
    else if (24<=g<=31&&me==10&&o==15&&m>=30||24<=g<=31&&me==10&&o==11&&m>=29)
    return 12;
    else if (24<=g<=31&&me==10&&o==16&&m>=30||24<=g<=31&&me==10&&o==11&&m>=29)
    return 1;
    else if (24<=g<=31&&me==10&&o==17&&m>=45||24<=g<=31&&me==10&&o==11&&m>=29)
    return 2;
    else if (24<=g<=31&&me==10&&o==19&&m>=30||24<=g<=31&&me==10&&o==11&&m>=29)
    return 3;
    else if (24<=g<=31&&me==10&&o==22&&m>=00||24<=g<=31&&me==10&&o==11&&m>=29)
    return 4;
    else if (24<=g<=31&&me==10&&o==0&&m>=45||24<=g<=31&&me==10&&o==11&&m>=29)
    return 5;
    else if (24<=g<=31&&me==10&&o==3&&m>=30||24<=g<=31&&me==10&&o==11&&m>=29)
    return 6;
    else if (24<=g<=31&&me==10&&o==6&&m>=15||24<=g<=31&&me==10&&o==11&&m>=29)
    return 7;


    else if (1<=g<=11&&me==11&&o==8&&m>=15||1<=g<=11&&me==11&&o==10&&m>=44)
    return 8;
    else if (1<=g<=11&&me==11&&o==10&&m>=45||1<=g<=11&&me==11&&o==12&&m>=29)
    return 9;
    else if (1<=g<=11&&me==11&&o==12&&m>=30||1<=g<=11&&me==11&&o==13&&m>=44)
    return 10;
    else if (1<=g<=11&&me==11&&o==13&&m>=45||1<=g<=11&&me==11&&o==14&&m>=44)
    return 11;
    else if (1<=g<=11&&me==11&&o==14&&m>=45||1<=g<=11&&me==11&&o==15&&m>=44)
    return 12;
    else if (1<=g<=11&&me==11&&o==15&&m>=45||1<=g<=11&&me==11&&o==16&&m>=59)
    return 1;
    else if (1<=g<=11&&me==11&&o==17&&m>=00||1<=g<=11&&me==11&&o==18&&m>=44)
    return 2;
    else if (1<=g<=11&&me==11&&o==18&&m>=45||1<=g<=11&&me==11&&o==21&&m>=14)
    return 3;
    else if (1<=g<=11&&me==11&&o==21&&m>=15||1<=g<=11&&me==11&&o==23&&m>=59)
    return 4;
    else if (1<=g<=11&&me==11&&o==0&&m>=00||1<=g<=11&&me==11&&o==2&&m>=44)
    return 5;
    else if (1<=g<=11&&me==11&&o==2&&m>=45||1<=g<=11&&me==11&&o==5&&m>=29)
    return 6;
    else if (1<=g<=11&&me==11&&o==5&&m>=30||1<=g<=11&&me==11&&o==8&&m>=14)
    return 7;



    if (12<=g<=22&&me==11&&o==7&&m>=45||12<=g<=22&&me==11&&o==10&&m>=14)
    return 8;
    else if (12<=g<=22&&me==11&&o==10&m>=15||12<=g<=22&&me==11&&o==11&&m>=59)
    return 9;
    else if (12<=g<=22&&me==11&&o==12&&m>=00||12<=g<=22&&me==11&&o==13&&m>=14)
    return 10;
    else if (12<=g<=22&&me==11&&o==13&&m>=15||12<=g<=22&&me==11&&o==14&&m>=14)
    return 11;
    else if (12<=g<=22&&me==11&&o==14&&m>=15||12<=g<=22&&me==11&&o==15&&m>=14)
    return 12;
    else if (12<=g<=22&&me==11&&o==15&&m>=15||12<=g<=22&&me==11&&o==16&&m>=29)
    return 1;
    else if (12<=g<=22&&me==11&&o==16&&m>=30||12<=g<=22&&me==11&&o==18&&m>=14)
    return 2;
    else if (12<=g<=22&&me==11&&o==18&&m>=15||12<=g<=22&&me==11&&o==20&&m>=44)
    return 3;
    else if (12<=g<=22&&me==11&&o==20&&m>=45||12<=g<=22&&me==11&&o==23&&m>=29)
    return 4;
    else if (12<=g<=22&&me==11&&o==23&&m>=30||12<=g<=22&&me==11&&o==2&&m>=14)
    return 5;
    else if (12<=g<=22&&me==11&&o==2&&m>=15||12<=g<=22&&me==11&&o==4&&m>=59)
    return 6;
    else if (12<=g<=22&&me==11&&o==5&&m>=00||12<=g<=22&&me==11&&o==7&&m>=44)
    return 7;



    //bilancia

    if (23<=g<=30&&me==9&&o==8&&m>=15||23<=g<=30&&me==9&&o==10&&m>=59)
    return 7;
     else if (23<=g<=30&&me==9&&o==11&&m>=00||23<=g<=30&&me==9&&o==13&&m>=29)
    return 8;
     else if (23<=g<=30&&me==9&&o==13&&m>=30||23<=g<=30&&me==9&&o==15&&m>=14)
    return 9;
     else if (23<=g<=30&&me==9&&o==15&&m>=15||23<=g<=30&&me==9&&o==16&m>=29)
    return 10;
     else if (23<=g<=30&&me==9&&o==16&&m>=30||23<=g<=30&&me==9&&o==17&&m>=29)
    return 11;
     else if (23<=g<=30&&me==9&&o==17&&m>=30||23<=g<=30&&me==9&&o==18&&m>=29)
    return 12;
     else if (23<=g<=30&&me==9&&o==18&&m>=30||23<=g<=30&&me==9&&o==19&&m>=44)
    return 1;
     else if (23<=g<=30&&me==9&&o==19&&m>=45||23<=g<=30&&me==9&&o==21&&m>=29)
    return 2;
     else if (23<=g<=30&&me==9&&o==21&&m>=30||23<=g<=30&&me==9&&o==23&&m>=59)
    return 3;
     else if (23<=g<=30&&me==9&&o==0&&m>=00||23<=g<=30&&me==9&&o==2&&m>=44)
    return 4;
     else if (23<=g<=30&&me==9&&o==2&&m>=45||23<=g<=30&&me==9&&o==5&&m>=29)
    return 5;
     else if (23<=g<=30&&me==9&&o==5&&m>=30||23<=g<=30&&me==9&&o==8&&m>=14)
    return 6;


    if (1<=g<=11&&me==10&&o==7&&m>=45||1<=g<=11&&me==10&&o==10&&m>=29)
    return 7;
     else if (1<=g<=11&&me==10&&o==10&&m>=30||1<=g<=11&&me==10&&o==12&&m>=59)
    return 8;
     else if (1<=g<=11&&me==10&&o==13&&m>=0||1<=g<=11&&me==10&&o==14&&m>=44)
    return 9;
     else if (1<=g<=11&&me==10&&o==14&&m>=45||1<=g<=11&&me==10&&o==15&&m>=59)
    return 10;
     else if (1<=g<=11&&me==10&&o==16&&m>=0||1<=g<=11&&me==10&&o==16&&m>=59)
    return 11;
     else if (1<=g<=11&&me==10&&o==17&&m>=0||1<=g<=11&&me==10&&o==17&&m>=59)
    return 12;
     else if (1<=g<=11&&me==10&&o==18&&m>=0||1<=g<=11&&me==10&&o==19&&m>=14)
    return 1;
     else if (1<=g<=11&&me==10&&o==19&&m>=15||1<=g<=11&&me==10&&o==20&&m>=59)
    return 2;
     else if (1<=g<=11&&me==10&&o==21&&m>=0||1<=g<=11&&me==10&&o==23&&m>=29)
    return 3;
     else if (1<=g<=11&&me==10&&o==23&&m>=30||1<=g<=11&&me==10&&o==2&&m>=14)
    return 4;
     else if (1<=g<=11&&me==10&&o==2&&m>=15||1<=g<=11&&me==10&&o==4&&m>=59)
    return 5;
     else if (1<=g<=11&&me==10&&o==5&&m>=0||1<=g<=11&&me==10&&o==7&&m>=44)
    return 6;

     if (12<=g<=23&&me==10&&o==7&&m>=0||12<=g<=23&&me==10&&o==9&&m<=44)
     return 7;
     else if (12<=g<=23&&me==10&&o==9&&m>=45||12<=g<=23&&me==10&&o==12&&m<=14)
     return 8;
     else if (12<=g<=23&&me==10&&o==12&&m>=15||12<=g<=23&&me==10&&o==13&&m<=59)
     return 9;
     else if (12<=g<=23&&me==10&&o==14&&m>=0||12<=g<=23&&me==10&&o==15&&m<=14)
     return 10;
     else if (12<=g<=23&&me==10&&o==15&&m>=15||12<=g<=23&&me==10&&o==16&&m<=14)
     return 11;
     else if (12<=g<=23&&me==10&&o==16&&m>=15||12<=g<=23&&me==10&&o==17&&m<=14)
     return 12;
     else if (12<=g<=23&&me==10&&o==17&&m>=15||12<=g<=23&&me==10&&o==18&&m<=29)
     return 1;
     else if (12<=g<=23&&me==10&&o==18&&m>=30||12<=g<=23&&me==10&&o==20&&m<=14)
     return 2;
     else if (12<=g<=23&&me==10&&o==20&&m>=15||12<=g<=23&&me==10&&o==22&&m<=44)
     return 3;
     else if (12<=g<=23&&me==10&&o==22&&m>=45||12<=g<=23&&me==10&&o==1&&m<=29)
     return 4;
     else if (12<=g<=23&&me==10&&o==1&&m>=30||12<=g<=23&&me==10&&o==4&&m<=14)
     return 5;
     else if (12<=g<=23&&me==10&&o==4&&m>=15||12<=g<=23&&me==10&&o==6&&m<=59)
     return 6;
  }//2
}//1

int ascos (std::string a)
{
  if (a=="toro")
    return 1;
  else if (a=="gemelli")
    return 2;
  else if (a=="cancro")
    return 3;
  else if (a=="leone")
    return 4;
  else if (a=="vergine")
    return 5;
  else if (a=="bilanca")
    return 6;
  else if (a=="scorpione")
    return 7;
  else if (a=="saggittario")
    return 8;
  else if (a=="capricorno")
    return 9;
  else if (a=="acquario")
    return 10;
  else if (a=="pesci")
    return 11;
  else if (a=="ariete")
    return 12;
  }

void afas(int gio,int mes,int ora,int m,std::string n,std::string c1,std::string sesso1,std::string ascendente12)
{//1
  std::string n1="", c="", t="", e="", sesso="", note="",ascendent="";
  int s=0, g=0,me=0,a=0,x=0,o=0,min=0;
  if (ora!=88&&m!=88)
  {
    s=ascendente(mes,gio,ora,m);
  }
  else
  {
    s=ascos(ascendente12);
  }
    std::ifstream las;
    las.open("/Users/simonecoli/Documents/coper/archiovio/coper.txt");
    if (s==12)//ariete
    {//2
      while (!las.eof())
      {//4
        las>>n1;
        las>>c;
        las>>sesso;
        las>>t;
        las>>e;
        las>>g;
        las>>me;
        las>>a;
        las>>o;
        las>>min;
        las>>ascendent;
        las>>note;
        x=ascendente(me,g,o,m);
        if (sesso!=sesso1&&n1!=n && c1!=c)
        {
          if (x==12 || x==4 || x==6 || x==8)
          {
          std::cout<<"\n-------------------------------"<<"\n";
          std::cout<<"nome: "<<n1<<"\n";
          std::cout<<"cognome: "<<c<<"\n";
          std::cout<<"Sesso: "<<sesso<<"\n";
          std::cout<<"numero di telefono: "<<t<<"\n";
          std::cout<<"E-mail: "<<e<<"\n";
          std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
          sf(g,me);
          std::cout << "Note: "<<note << '\n';
        }
        }
      }//4
  }//2
  else if (s==1) //toro
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==2 || x==4 || x==6 || x==8)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
      }
      }
    }
  }

  else if (s==2) //gemelli
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==4 || x==10 || x==6 || x==8)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }
  else if (s==3) //cancro
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==1 || x==5 || x==7 || x==1)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==4) //leone
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>ascendent;
      las>>min;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==12 || x==2 || x==6 || x==8 || x==5)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==5) //vergine
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c )
      {
        if( x==1 || x==3 || x==4 || x==6 || x==9)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==6)//bilancia
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if(x==2 || x==5 || x==4 || x==6 || x==9 || x==10)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==7) //scorpione
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if ( x==1 || x==3 || x==9 || x==11)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==8) //saggittario
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if( x==1 || x==4 || x==10 || x==8)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==9) //capricorno
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if( x==1 || x==5 || x==7 || x==11)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==10) //acquario
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if( x==2 || x==6 || x==8)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }

  else if (s==11)//pesci
  {
    while (!las.eof())
    {
      las>>n1;
      las>>c;
      las>>sesso;
      las>>t;
      las>>e;
      las>>g;
      las>>me;
      las>>a;
      las>>o;
      las>>min;
      las>>ascendent;
      las>>note;
      x=ascendente(me,g,o,m);
      if (sesso!=sesso1&&n1!=n && c1!=c)
      {
        if (x==1 || x==3 || x==7 || x==9)
        {
        std::cout<<"\n-------------------------------"<<"\n";
        std::cout<<"nome: "<<n1<<"\n";
        std::cout<<"cognome: "<<c<<"\n";
        std::cout<<"Sesso: "<<sesso<<"\n";
        std::cout<<"numero di telefono: "<<t<<"\n";
        std::cout<<"E-mail: "<<e<<"\n";
        std::cout << "Data di nascita: "<<g<<" "<<me<<" "<<a<<" "<<"< ";
        sf(g,me);
        std::cout << "Note: "<<note << '\n';
      }
      }
    }
  }
 las.close();
}//1

int alf(char c)
{
  int n=0;
  switch (c)
  {
    case 'a':
    n=1;
    break;
    case 'b':
    n=2;
    break;
    case 'c':
    n=3;
    break;
    case 'd':
    n=4;
    break;
    case 'e':
    n=5;
    break;
    case 'f':
    n=6;
    break;
    case 'g':
    n=7;
    break;
    case 'h':
    n=8;
    break;
    case 'i':
    n=9;
    break;
    case 'j':
    n=10;
    break;
    case 'k':
    n=11;
    break;
    case 'l':
    n=12;
    break;
    case 'm':
    n=13;
    break;
    case 'n':
    n=14;
    break;
    case 'o':
    n=15;
    break;
    case 'p':
    n=16;
    break;
    case 'q':
    n=17;
    break;
    case 'r':
    n=18;
    break;
    case 's':
    n=19;
    break;
    case 't':
    n=20;
    break;
    case 'u':
    n=21;
    break;
    case 'v':
    n=22;
    break;
    case 'w':
    n=23;
    break;
    case 'x':
    n=24;
    break;
    case 'y':
    n=25;
    break;
    case 'z':
    n=26;
    break;
    default:
    n=0;
    break;
  }
  return n;
}
