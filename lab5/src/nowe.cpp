#include<iostream>
#include"../inc/nowe.hh"
#include"../inc/tabl.hh"
using namespace std;




//void Runnable::seedSrand
void QuickSort::quicksort(int *tablica, int lewy, int prawy)
{
  //  int v=tablica[lewy];
    int v=tablica[(lewy+prawy)/2];
    //int v=tablica[prawy];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while (tablica[i]<v) i++;
        while (tablica[j]>v) j--;
        if (i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++; j--;
        }
    }
    while (i<=j);
    if (j>lewy) quicksort(tablica,lewy, j);
    if (i<prawy) quicksort(tablica, i, prawy);
}




void QuickSort::quicksort_od_konca(int *tablica, int lewy, int prawy)
{
    //int v=tablica[lewy];
    int v=tablica[(lewy+prawy)/2];
    //int v=tablica[prawy];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while (tablica[i]>v) i++;
        while (tablica[j]<v) j--;
        if (i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++; j--;
        }
    }
    while (i<=j);
    if (j>lewy) quicksort_od_konca(tablica,lewy, j);
    if (i<prawy) quicksort_od_konca(tablica, i, prawy);
}


void QuickSort::wyswietl()
{
  for(int i=0; i<ilosc_elementow; i++)
  {
  	cout<<tablica[i]<<endl;  //WYSWIETLENIE POSORTOWANYCH
  }
}
