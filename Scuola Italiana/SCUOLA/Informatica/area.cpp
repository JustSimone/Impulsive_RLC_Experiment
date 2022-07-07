#include <iostream>
using namespace std;
void area(int r)
{
  std::cout << "Area: "<< r*r*3.14159265358979323846264338327950288419716939937510<<'\n';
}
int main()
{
  int r;
  do
 {
  std::cout << "Dai dimmi il raggio e io ti dico l'area...\nRaggio: ";
  std::cin >> r;
  area(r);
 }
 while (r!=0);
  return 0;
}
