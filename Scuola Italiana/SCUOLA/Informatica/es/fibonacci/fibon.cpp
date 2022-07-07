#include <iostream>
#include <fstream>
using namespace std;
int risp()
{
  int d;
  std::cout << "Inserisci quanti vaolri della serie di fibonacci vuoi salvare: ";
  std::cin >> d;
  return d;
}

void stamp(int d)
{
  std::cout << d << '\n';
}

int main()
{
  int a=0,b=1,c=0,n=0, r=0, p=0, d=0, j=0;
  r=risp();
  ofstream s;
  s.open("fibonacci.txt");
  s<<b<<'\n';
  for (int i=0;i<r-1; i++)
  {
    c=a+b;
    s<<c<<'\n';
    a=b;
    b=c;
    if (c%2==0)
    {
      p++;
    }
  }
  s.close();
  int t[p];
  ifstream l;
  l.open("fibonacci.txt");
  for (int i=0;i<r;i++)
  {
    l>>d;
    if (d%2==0)
    {
      t[j]=d;
      stamp(t[j]);
      j++;
    }
  }
  l.close();
  ofstream s1;
  s1.open("array.txt");
  for (int i=0; i<p; i++)
  {
    if (t[i]%3!=0)
    {
      s1<<t[i]<<'\n';
    }
  }
  s1.close();
  return 0;
}
