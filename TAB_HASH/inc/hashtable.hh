#ifndef HASHTABLE_HH
#define HASHTABLE_HH
#include <iostream>
#include <string>
#include "ihashtable.hh"
#include "measurable.hh"
#include "list.hh"

using namespace std;

// stała określająca ilość bucketów (l. elementów tablicy list)
#define SIZE 1000000

class Hashtable : public iHashtable {
  private:
  // Rozmiar tablicy haszującej (ilość bucketów)
  int numberOfBuckets;

  // Zmienna odpowiedzialna za wybór funkcji haszującej
  int hashFunction = 2;

  // bucket to wskaźnik na początek tablicy list
  List* bucket = nullptr;

  /* funkcja haszująca nr 1, jest wykorzystywana gdy zmienna hashFunction == 1
  Zamienia dwa pierwsze znaki na kod ASCII i zwraca sumę tych wartości
  modolo wartość zmiennej numberOfBuckets */
  int hash1(string key);

  /* funkcja haszująca nr 2, jest wykorzystywana gdy zmienna hashFunction == 2
  Implementacja algorytmu haszującego Fowler–Noll–Vo */
  int hash2(string key);

  public:
  Hashtable() {
    numberOfBuckets = SIZE;
    bucket = new List[SIZE];
  }
  Hashtable(int nSize) {
    numberOfBuckets = nSize;
    bucket = new List[nSize];
  }

  ~Hashtable() {
    delete [] bucket;
  }

  void insert(string key, string value);
  string find(string key);
  string remove(string key);
  void ustaw_haszowanie(int sposob_haszowania);
  void restart();
};

#endif
