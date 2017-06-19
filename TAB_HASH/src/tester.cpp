#include "hashtable.hh"
#include "tester.hh"

using namespace std;

void Tester::przygotuj_do_testu(unsigned int amount,int sposob_haszowania) {
  string Klucz;
  string Do_wpisu;
  unsigned int los;
	unsigned int i = 0;

  // ustawienie odpowiedniej funkcji haszujacej
  dictionary->ustaw_haszowanie(sposob_haszowania);

  // losowanie numeru indeksu do losowania
srand( time( NULL ) );
los=(( std::rand() % amount ) -1 );

   //dane z pliku imiona.csv
	file.open("imiona.csv");
  if(!file.is_open()) {
    cerr << "Nie wczytano pliku, sprawdz, czy jest w tym samym folderze\n";
    exit(EXIT_FAILURE);
  }

  while(file.good() && i < amount-1) {
    getline(file,Klucz,',');
    getline(file,Do_wpisu,'\n');
		dictionary->insert(Klucz,Do_wpisu);
    if(i == los) {
      znajdz = Klucz;
    }
		++i;
  }
  file.close();
}

void Tester::test(unsigned int amount,int sposob_haszowania) {
  dictionary->find(znajdz);
}

void Tester::restart() {
  dictionary->restart();
}
