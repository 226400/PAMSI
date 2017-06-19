#ifndef TESTER_HH
#define TESTER_HH
#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include "hashtable.hh"
#include "measurable.hh"

using namespace std;

class Tester: public Measurable {
  private:
  Hashtable* dictionary = new Hashtable;
  ifstream file;
  string znajdz;
  public:
  Tester() {};
  ~Tester() {
    file.close();
  }

  void przygotuj_do_testu(unsigned int amount,int sposob_haszowania = 2);
  void test(unsigned int amount,int sposob_haszowania = 2);
  void restart();
};

#endif
