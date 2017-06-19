#include "node.hh"

using namespace std;

string Node::getValue() const {
  return value;
}

void Node::setValue(string nValue) {
  value = nValue;
}

void Node::setKey(string Klucz) {
  key = Klucz;
}

string Node::getKey() const {
  return key;
}

Node* Node::getNext() {
  return next;
}

Node* Node::getPrev() {
  return prev;
}

void Node::setNext(Node* N) {
  next = N;
}

void Node::setPrev(Node* O) {
  prev = O;
}
