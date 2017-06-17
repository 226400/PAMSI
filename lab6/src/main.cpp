#include <iostream>
#include <cstdlib>

#include "../inc/tree_node.hh"
#include "../inc/tree.hh"
#include "../inc/stoper.hh"

using namespace std;

int main()
{

  srand (time(NULL));
  Tree tree[10];
  int size=10000000;


  for(int i=0;i<10;i++)
  {

    for(int j=0;j<size;j++)

      tree[i].add(rand()%size/4);

    for(int k=0;k<100;k++)
      tree[i].find(size);

  }
}
