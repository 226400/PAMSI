#ifndef LIST_HH
#define LIST_HH
#include <node.hh>
#include <string>

using namespace std;

class List {
  private:
  // wskaźnik na pierwszy element listy
  Node* header = new Node;

  // wskaźnik na ostatni element listy
  Node* trailer = new Node;

  public:
  List() {
    header->setNext(trailer);
    trailer->setPrev(header);
  }
  ~List() {
    while(!isEmpty()) {
      removeBack();
    }
    delete trailer;
    delete header;
  }
  // metoda zwraca węzeł, argumentem jest numer węzła (pierwszy węzeł ma numer 1)
  Node* get(unsigned int position);
  void add(unsigned int position, string key, string value);

  // metoda do usuwania elementów węzła, argumentem jest numer węzła
  string remove(unsigned int position);
  unsigned int size()const;
  bool isEmpty()const;

  void addFront(string key, string value);
  void addBack(string key, string value);

  // metoda dodaje nowy węzeł za podanym węzłem
  void addAfter(Node* nodeBefore, string key, string value);
  bool removeElem(string key);

  string removeNode(Node* nodeToRemove);
  string removeFront();
  string removeBack();
  string find(string wKey);

  // metoda usuwająca wszystkie elementy z listy
  void restart();
};

#endif
