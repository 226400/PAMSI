#ifndef _nowe_HH
#define _nowe_HH

using namespace std;



class QuickSort
{
public:
	// konstruktor i destruktor
	//QuickSort(int *tablica, int lewy, int prawy);
	//~QuickSort();

	// metody składowe klasy

	void quicksort_od_konca(int *tablica, int lewy, int prawy);
	void quicksort(int *tablica, int lewy, int prawy);
	void wyswietl();

private:

	int ilosc_elementow;
	int lewy;
	int prawy;
	int *tablica;
};

#endif
