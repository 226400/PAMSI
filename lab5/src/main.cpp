
#include <iostream>
#include <chrono>
#include <ctime>
#include "../inc/main.hh"
#include "../inc/tabl.hh"
#include "../inc/nowe.hh"
#include "../inc/run.hh"
#include "../inc/starter.hh"
#include "../inc/stoper.hh"


using namespace std;

// Zmień wartość, aby zmienić sposób rozszerzania tablicy:
// one 		- rozszerzaj o jeden element
// twice 	- rozszerzaj dwukrotnie
expandType typeOfExp = one;


int main (void) {


		Stoper czas;
		Starter do_pliku;
	for(int i=0;i<50;i++ )
		{
		QuickSort obiekt;


		int ilosc_elementow = 100000;
		int *tablica = new int [ilosc_elementow];


		for(int i=0; i<ilosc_elementow;i++)
		{
			tablica[i]=rand()%1000000;                          //GENEROWANIE LOSOWE
		}

		obiekt.quicksort_od_konca(tablica,0,ilosc_elementow-1);
		//obiekt.wyswietl();
czas.start();
		obiekt.quicksort(tablica,0,ilosc_elementow-1);

		czas.stop();
		czas.elapsed_Time();

		//obiekt.wyswietl();

			delete [] tablica;
//do_pliku.dumpToFile("pomiar");

}
}
