#ifndef QUEUE_HH
#define QUEUE_HH
#include "Ikolejka.hh"

using namespace std;

class Kolejka : public Ikolejka{
  private:
  int rozmiar;
  int *tab;
    int ile;
    int glowa;
    int ogon;


  public:
  Kolejka() {
    rozmiar = 1000000000;
    tab = new int[rozmiar];
     ile=0;
     glowa=0;
     ogon=0;

  }
  ~Kolejka() {}

  void wyswietl_kolejke();
  void push(int value);
  int pop();
  void size();
  void empty();
  void ustaw(unsigned int amount);
  void restart();
  int find(int numb);
};

#endif
