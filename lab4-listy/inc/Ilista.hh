#include<iostream>

using namespace std;



struct Lista{
int var;
Lista *ptr;
//Lista *start;
};
List() {

  struct Lista *start=NULL;
}
~List();


void addFront(Lista *&start);
void deleteFront(Lista *&start);
void deleteBack(Lista *&start);
void printList(Lista *&start);
void deleteList(Lista *&start);
int countList(Lista *&start);
void addBack(Lista *&start);
};
