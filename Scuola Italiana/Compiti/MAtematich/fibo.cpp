#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long a=1,b=1,c=0;
  for (int i=0; i<100;i++)
  {
    std::cout << a<<" " << '\n';
    b=c+a;
    std::cout << b<<" " << '\n';
    c=b+a;
    std::cout << c<<" " << '\n';
    a=c+b;
  }
  return 0;
}
