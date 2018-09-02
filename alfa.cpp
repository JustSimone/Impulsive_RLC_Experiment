#include <iostream>
#include "/Users/simonecoli/Documents/coper/archiovio/librerie/clcoper.h"
#include <fstream>
using namespace std;
int main()
{
  int s;
    string n="", c="";
    std::cin >> s;
  switch (s) {
    case 1:
    {
  //--------------------------------write
  std::cin >> n >> c;
  ofstream s;
  s.open("alfa.txt",ios::app);
  s<<endl;
  s<<n<<endl;
  s<<c;
}
break;
case 2:
{
  //--------------------------------read
  n="", c="";
  ifstream l;
  l.open("alfa.txt");
  if (l)
  {
  while (!l.eof())
  {
    l>>n;
    l>>c;
    for (int i=0; i<c.length(); i++)
    {
      std::cout << c[i] << '\n';
      std::cout << alf(c[i]) << '\n';
    }
  }
}
else
{
  std::cout << "file non trovato" << '\n';
}
}
break;
}
  return 0;
}
