#include <iostream>
#include <string>
#include "assistant.hh"
#include "tester.hh"

using namespace std;

int main() {
	Assistant helper(100);
	Tester obj;
	int amountOfData = 10;  // liczba próbek
	int powtorzen = 100;               // liczba powtórzeń obliczeń
	int sposob_haszowania = 2;                // wybór funkcji haszującej

	helper.pomiar(obj,amountOfData,powtorzen,sposob_haszowania);   // funkcja wyswietla czas sredni

	return 0;
}
