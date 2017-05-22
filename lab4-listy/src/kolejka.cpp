#include <iostream>
#include "../inc/kolejka.hh"
#include <cstdlib>

using namespace std;

void Kolejka::wyswietl_kolejke()
{
    cout<<"ZAWARTOSC KOLEJKI: "<<endl;
    if (ile==0)
    {
        cerr<<"pusta";
          exit(EXIT_FAILURE);
    }

    else
    {

        int indeks;

        for (int i=0; i<ile; i++)
        {
            indeks=glowa+i;
            if (glowa+i>=rozmiar) indeks=glowa+i-rozmiar;
            cout<<tab[indeks]<<" ";
        }

    }

}
void Kolejka::push(int value)
{
    if (ile>=rozmiar)
    {
        cerr << "Kolejka pelna!"<<endl;
        exit(EXIT_FAILURE);
    }
    else
    {
tab[ogon] = value;
        ogon=(ogon+1)%rozmiar;
        ile=ile+1;
    }
}

int Kolejka::pop()
{
    if (ile==0)
    {
        cerr<<"Kolejka jest pusta!"<<endl;
  exit(EXIT_FAILURE);
    }
    else
    {
        glowa=(glowa+1)%rozmiar;
        ile=ile-1;
    }
    return glowa;
}

void Kolejka::size()
{
    cout<<endl<<"Liczba elementow w kolejce: "<<ile<<endl;
}

void Kolejka::empty()
{

    if (ile==0) cout<<endl<<" TRUE";
    else cout<<endl<<"  FALSE";
}

void Kolejka::ustaw(unsigned int amount) {
  push(-1);
  for(unsigned int i = 0; i < amount-1; ++i) {
    push(i);
  }
}

void Kolejka::restart() {
	delete [] tab;
	tab = new int[rozmiar-1];
	ogon = -1;
}

int Kolejka::find(int numb) {
  int position = 1;
  while(pop() != numb) {
    ++position;
  }
  return position;
}
