#include "hashtable.hh"
#include<cmath>


using namespace std;



void Hashtable::insert(string key, string value) {
  unsigned int index;
  if(hashFunction == 1) {
    index = hash1(key);
  }
  else if(hashFunction == 2) {
    index = hash2(key);
  }
  else {
    cerr << "Nie ma takiej opcji haszowania \n";
    exit(EXIT_FAILURE);
  }
  bucket[index].addBack(key, value);
}

string Hashtable::remove(string key) {
  unsigned int index;
  if(hashFunction == 1) {
    index = hash1(key);
  }
  else {
    index = hash2(key);
  }
  bucket[index].removeElem(key);
  return key;
}

string Hashtable::find(string key) {
  unsigned int index;
  if(hashFunction == 1) {
    index = hash1(key);
  }
  else {
    index = hash2(key);
  }
  return bucket[index].find(key);
}

int Hashtable::hash2(string key) {
  int result;
  if( key.length() < 2) {
    result = (int)key[0];
  }
  else {
    result = (int)key[0] + (int)key[1];
  }
  return result % numberOfBuckets;
}




int Hashtable::hash1(string key) {

	int h = 0;
float A = (sqrt(5)-1)/2;
for(unsigned int i = 0; i < key.length(); ++i) {
  h += (int)key[i];
}
h = (int)( SIZE * ( (h * A) - floor(h * A) ) );

return h%numberOfBuckets;

}

void Hashtable::ustaw_haszowanie(int sposob_haszowania) {
  hashFunction = sposob_haszowania;
}

void Hashtable::restart() {
  bucket->restart();
}
