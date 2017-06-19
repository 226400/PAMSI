#ifndef ASSISTANT_HH
#define ASSISTANT_HH
#include "stoper.hh"
#include "measurable.hh"

using namespace std;

class Assistant {
  private:
  //tablica służąca do przechowywania wyników pomiarów
  double *results;

  Stoper stoper;

  double srednia(int powtorzen);

  public:
  Assistant() {
    results = new double [20];
  }

  Assistant(int size) {
    results = new double [size];
  }

  ~Assistant() {
    delete [] results;
  }

  void pomiar(Measurable &obj,int liczba_elementow,int powtorzen,int sposob_haszowania);
};
#endif
