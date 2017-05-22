#include <iostream>
#include <cstdlib>
#include "../inc/stos.hh"


using namespace std;

bool Stack::isEmpty()const {
  return (topElem<0);
}

int Stack::size()const {
  return topElem-1;
}

void Stack::push(int value) {
    if(size() == rozmiar) {
      std::cerr << "Stos jest zapełniony" <<std::endl;
      exit(EXIT_FAILURE);
    } else {
      ++topElem;
      tab[topElem] = value;
    }
}

int Stack::pop() {
  if(isEmpty()){
    std::cerr << "Chcesz usunąć z pustego stosu" <<std::endl;
    exit(EXIT_FAILURE);
  } else {
    --topElem;
  }
  return tab[topElem+1];
}

int Stack::top(){
  return topElem;
  cout<<topElem;
}

void Stack::prepareThings(unsigned int amount) {
  push(-1);
  for(unsigned int i = 0; i < amount-1; ++i) {
    push(i);
  }
}

void Stack::doThings(unsigned int amount,int mode) {
  find(-1);
}

void Stack::restart() {
	delete [] tab;
	tab = new int[rozmiar];
	topElem = -1;
}

int Stack::find(int value) {
  int position = 1;
  while(pop() != value) {
    ++position;
  }
  return position;
}
