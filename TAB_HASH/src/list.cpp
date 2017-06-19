#include <iostream>
#include "list.hh"

using namespace std;

bool List::isEmpty()const {
  return (header->getNext() == trailer);
}

unsigned int List::size()const {
  Node* temp = header->getNext();
  unsigned int count = 0;

  while(temp != trailer) {
    ++count;
    temp = temp->getNext();
  }
  return count;
}

void List::addAfter(Node* nodeBefore, string key, string value) {
  Node* newNode = new Node;
  newNode->setKey(key);
  newNode->setValue(value);
  newNode->setPrev(nodeBefore);
  newNode->setNext(nodeBefore->getNext());
  (nodeBefore->getNext())->setPrev(newNode);
  nodeBefore->setNext(newNode);
}

void List::addFront(string key, string value) {
  addAfter(header,key,value);
}

void List::addBack(string key, string value) {
  addAfter(trailer->getPrev(),key,value);
}

string List::removeFront() {
  string removedValue;
  removedValue = removeNode(header->getNext());
  return removedValue;
}

string List::removeBack() {
  string removedValue;
  removedValue = removeNode(trailer->getPrev());
  return removedValue;
}

string List::removeNode(Node* nodeToRemove) {
  string temp;
  Node* nodeBefore = nodeToRemove->getPrev();
  Node* nodeAfter = nodeToRemove->getNext();
  temp = nodeToRemove->getKey();

  nodeBefore->setNext(nodeAfter);
  nodeAfter->setPrev(nodeBefore);

  delete nodeToRemove;

  return temp;
}

Node* List::get(unsigned int position) {
  Node* temp = header;
  if(position > size()) {
    cout << "Chcesz uzyskac dostep do elementu, ktory nie istnieje! \n";
    exit(EXIT_FAILURE);
  }
  else {
    for(unsigned int i = 1; i <= position; ++i) {
      temp = temp->getNext();
    }
  }
  return temp;
}

void List::add(unsigned int position,string key, string value) {
  if(position == 1) {
    addFront(key,value);
  }
  else if(position == size()+1) {
    addBack(key,value);
  }
  else if(position > size()+1 || position <= 0) {
    cout << "Chcesz dodać element poza listą! \n";
    exit(EXIT_FAILURE);
  }
  else {
    addAfter(get(position),key,value);
  }
}
string List::remove(unsigned int position) {
  string result = 0;
  if(position == 1) {
    result = removeFront();
  }
  else if(position == size()) {
    result = removeBack();
  }
  else if(position > size() || position <= 0) {
    cout << "Chcesz usunąć element poza listą! \n";
    exit(EXIT_FAILURE);
  }
  else {
    result = removeNode(get(position));
  }
  return result;
}

 bool List::removeElem(string key) {
  Node* temp = header->getNext();
  string removedKey;
  while(temp != trailer) {
    if(temp->getKey() == key) {
      Node* nodeBefore = temp->getPrev();
      Node* nodeAfter = temp->getNext();
      removedKey = temp->getKey();

      nodeBefore->setNext(nodeAfter);
      nodeAfter->setPrev(nodeBefore);

      delete temp;
      return true;
    }
  }
  cerr << "NIE MA TAKIEGO ELEMENTU!\n";
  return false;
}

string List::find(string wKey) {
  Node* temp = header->getNext();
  bool notFound = true;
  string keyValue;

  while(temp != trailer && notFound ) {
    if(temp->getKey() == wKey) {
      keyValue = temp->getValue();
      notFound = false;
    }
    else {
    temp = temp->getNext();
  }
  }
  if(notFound) {
    cout << "Nie znaleziono tego elementu w liście! Zwracam pierwszy" << endl;
    return (header->getNext())->getValue();
  }
  return keyValue;
}

void List::restart() {
  while(!isEmpty()) {
    removeBack();
  }
}
