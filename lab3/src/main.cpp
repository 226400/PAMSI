
#include <iostream>
#include <chrono>
#include <ctime>
#include "../inc/main.hh"
#include "../inc/tabl.hh"
#include "../inc/run.hh"
#include "../inc/starter.hh"
#include "../inc/stoper.hh"
using namespace std;

// Zmień wartość, aby zmienić sposób rozszerzania tablicy:
// one 		- rozszerzaj o jeden element
// twice 	- rozszerzaj dwukrotnie
expandType typeOfExp = one;


int main (void) {
	for (unsigned int i = 0; i < 10; i++) {
		Starter test;
		test.setTestSize(25000);
		test.test();
		test.printResults();
		test.dumpToFile("test_twice_100");


	}

}
