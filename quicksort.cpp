#include<iostream>
using namespace std;

int partition(int tablica[], int p, int r) 
{
	int x = tablica[p]; 
	int i = p, j = r, w; 
	while (true)
	{
		while (tablica[j] > x) 
			j--;
		while (tablica[i] < x) 
			i++;
		if (i < j)
		{
			w = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = w;
			i++;
			j--;
		}
		else 
			return j;
	}
}

void quicksort(int tablica[], int p, int r) 
{
	int q;
	if (p < r) 
	{	
		q = partition(tablica,p,r);
		quicksort(tablica, p, q);
		quicksort(tablica, q+1, r);
	}
}

int main()
{
	int ilosc_liczb, i;
	cout << "Podaj ilosc licz do posortowania: ";
	cin >> ilosc_liczb;
	int *tablica = new int [ilosc_liczb]; 

	for (i = 0; i < ilosc_liczb; i++) 
	{
		cout << "Podaj liczbe: ";
		cin >> tablica[i];
	}

	quicksort(tablica,0,ilosc_liczb-1);

	for (i = 0; i < ilosc_liczb; i++)
		cout << "    " << tablica[i] << endl;

	delete [] tablica; 

    return 0;
}
