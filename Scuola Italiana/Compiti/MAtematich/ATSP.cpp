#include <iostream>
#include <cmath>
using namespace std;
float distanza(float x1, float y1, float x2, float y2)
{
  float d, a, b;
  a=pow((x1-x2), 2.0);
  b=pow((y1-y2), 2.0);
  d=sqrt(a+b);
  return d;
}
float altezza(float x1, float y1, float x2, float y2, float xP,float yP)
{
  float m,r, a,b,c,v,h,den;
  //----RETTA-----------------------
  m= (y1-y2)/(x1-x2);
  a=-m;
  b=1;
  c=((x1)*m)-y1;
  //----DIST. PUNTO RETTA-----------
  v=fabs((a*xP)+(b*yP)+c);
  den= sqrt (pow(a,2.0)+pow(b,2.0));
  h=v/den;
  return h;
}
void area(float h, float b)
{
  float A;
A = (b * h) / 2;
std::cout << '\n' <<"Area = "<< A << '\n';
}
int main()
{
  float xa,ya,xb,yb,xc,yc,dist,h;
  std::cout << "Inserisci la posizione dei punti..." << '\n';
  std::cout << "Punto A (estremo segmento base): ";
  std::cin >> xa >> ya;
  std::cout << "Punto B (estremo segmanto base): ";
  std::cin >> xb >> yb;
  std::cout << "Punto C (punto casuale, estremo dell'altezza): ";
  std::cin >> xc >> yc;
  dist=distanza(xa,ya,xb,yb);
  h=altezza(xa,ya,xb,yb,xc,yc);
  area(h,dist);
  return 0;
}
