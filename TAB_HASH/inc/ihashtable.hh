#ifndef IHASHTABLE_HH
#define IHASHTABLE_HH
#include <string>

using namespace std;

class iHashtable {
  public:
  virtual void insert(string key, string value) = 0;
  virtual string find(string key) = 0;
  virtual string remove(string key) = 0;
  ~iHashtable() {};
};

#endif
