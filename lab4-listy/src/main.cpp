
#include <iostream>
#include <chrono>
#include <ctime>
#include "../inc/main.hh"
#include "../inc/tabl.hh"
#include "../inc/run.hh"
#include "../inc/starter.hh"
#include "../inc/stoper.hh"
#include "../inc/stos.hh"
#include "../inc/kolejka.hh"
using namespace std;
expandType typeOfExp = twice;




int main (void) {
	for (unsigned int i = 0; i < 1; i++) {
//		Stack stos;
	//	stos.prepareThings(1000000000);
		//stos.doThings(-1, 1);
		//stos.restart();

		Kolejka queue;
		queue.ustaw(1000000);
		queue.find(1000000);
		queue.restart();

	}

}
