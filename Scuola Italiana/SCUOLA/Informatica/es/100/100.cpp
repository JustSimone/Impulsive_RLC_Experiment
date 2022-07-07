#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

void stampa(int b) {

	cout<<b<<endl;
	}

int main () {

	int a, b, cont=0, max, posmax, temp, c=0;
	bool invertire;

	ofstream testo;
	testo.open("100valori.txt");

	for(int i=0; i<100; i++) {

		a=rand()%100-50;

		if(a>0) {

			cont++;
		}

		testo<<a<<endl;
	}

	testo.close();

	int array[cont];

	ifstream testo2;
	testo2.open("100valori.txt");

	while(!testo2.eof()) {

		testo2>>b;

		if(b>0) {


			array[c]=b;

			stampa(b);
      c++;
		}
	}

	testo2.close();
  ofstream scrivi;
  scrivi.open("decrescente.txt");
	for(int i=0; i<cont-1; i++) {

		invertire=false;

		max=array[i];

		for(int j=i+1; j<cont; j++) {

			if(array[j]>max) {

				max=array[j];

				posmax=j;

				invertire=true;
			}
		}

		if(invertire==true) {

			temp=array[i];
			array[i]=max;
			array[posmax]=temp;
		}
	}

for (int z=0;z<cont;z++)
{
  int f=0;
  scrivi<<array[z]<<'\n';
}
scrivi.close();
return 0;
}
