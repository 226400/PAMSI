#include <iostream>
#include "../inc/tabl.hh"
#include "../inc/main.hh"
#include <sys/time.h>


using namespace std;


int main (void) {
struct timeval t1, t2;
double elapsedTime;

gettimeofday(&t1, NULL); //time start


	tabn tablica_dynamiczna;
	


for(int i=0;i<+10;i++)
{

//cout<<"przerwa  "<<i<<endl;
//cout<<endl;
			tablica_dynamiczna.addElemLast(5);

			//tablica_dynamiczna.addElemDoubleTabl(liczba);
			//tablica_dynamiczna.addElem1Tabl5(liczba);
			}
			tablica_dynamiczna[10]=8;
			tablica_dynamiczna.showElems();
			gettimeofday(&t2, NULL);
			elapsedTime = (t2.tv_sec - t1.tv_sec)*1000.0;
			elapsedTime += (t2.tv_usec - t1.tv_usec)/1000.0;
	cout<<tablica_dynamiczna.nOE()<<endl;
			cout<<elapsedTime<<"ms."<<endl;

	}
