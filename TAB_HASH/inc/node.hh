#ifndef NODE_HH
#define NODE_HH
#include <string>

using namespace std;

class Node {
  private:
  string key;
  string value;
  Node* next;
  Node* prev;

  public:
  Node() : key(""),value(""),next(nullptr),prev(nullptr) {};
  Node (string Klucz, string Do_wpisu,
        Node* n = nullptr, Node* p = nullptr) {
    key = Klucz;
    value = Do_wpisu;
    next = n;
    prev = p;
  }
  string getValue() const;
  void setValue(string value);

  string getKey() const;
  void setKey(string Klucz);

  Node* getNext();
  Node* getPrev();

  void setNext(Node* N);
  void setPrev(Node* N);
};

#endif
