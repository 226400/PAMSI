#ifndef STACK_HH
#define STACK_HH
#include "Istos.hh"

//#include "measurable.hh"

using namespace std;

class Stack : public iStack{
  private:
  int rozmiar;
  int *tab;
  int topElem;

  public:
  Stack() {
    rozmiar = 1000000000;
    tab = new int[rozmiar];
    topElem = -1;
  }
  Stack(int p) {
    rozmiar = p;
    tab = new int[rozmiar];
    topElem = -1;
  }
  ~Stack() {
    delete []tab;
  }

  int size() const;
  bool isEmpty() const;

  void push(int value);
  int pop();
  int top();

  void prepareThings(unsigned int amount);
  void doThings(unsigned int amount,int mode = 0);
  void restart();

  int find(int i);
};

#endif
