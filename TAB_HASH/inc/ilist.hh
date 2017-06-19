#ifndef ILIST_HH
#define ILIST_HH
#include <string>
#include "node.hh"

using namespace std;

class iList {
  public:
  virtual void add(unsigned int position,) = 0;
  virtual string remove(unsigned int position) = 0;
  virtual Node* get(unsigned int position) = 0;
  virtual unsigned int size()const = 0;
  virtual bool isEmpty()const = 0;
};

#endif
