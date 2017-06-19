#include <iostream>
#include "assistant.hh"

using namespace std;

void Assistant::pomiar(Measurable &obj, int liczba_elementow,
                        int powtorzen, int sposob_haszowania) {
    for(int i = 0; i < powtorzen; ++i) {
      obj.przygotuj_do_testu(liczba_elementow,sposob_haszowania);
      stoper.start();
      obj.test(liczba_elementow,sposob_haszowania);
      stoper.stop();
      results[i] = stoper.elapsed_Time();
      stoper.reset();
      obj.restart();
    }
    cout << "Średni czas wykonania to "
              << srednia(powtorzen) << endl;
}

double Assistant::srednia(int powtorzen) {
  double sum = 0;

  for(int i = 0; i < powtorzen; ++i) {
    sum += results[i];
  }
  return sum/powtorzen;
}
