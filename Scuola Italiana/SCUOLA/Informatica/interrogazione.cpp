#include <iostream>
using namespace std;
int main()
{
  int c=0,dim=0;
  string s, s1;
  std::cout << "inserisci una stinga: ";
  std::cin >> s;
  std::cout << "inserisci una seconda tringa: ";
  std::cin >> s1;
  if (s1.length()<s.length())
  dim=s1.length();
  else
  dim=s.length();
  char l[dim];
  for(int i=0;i<s.length();i++)
  {
    for (int j=0;j<s1.length();j++)
    {
      if(s[i]==s1[j])
      {
        l[c]=s[i];
        if (c==0)
        {
          std::cout << "I aratteri uguali sono: " << '\n'<<l[c]<<'\n';
        }
        else
        {
          for(int z=0;z<c;z++)
          {
            if(l[c]==l[z])
            {
              std::cout << l[c] << '\n';
            }
          }
        }
        c++;
      }
    }
  }
  std::cout << "sono stati trovati "<<c<<" caratteri uguali" << '\n';
  return 0;
}
