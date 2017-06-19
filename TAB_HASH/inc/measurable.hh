#ifndef MEASURABLE_HH
#define MEASURABLE_HH

using namespace std;

class Measurable {
  public:
  virtual void przygotuj_do_testu(unsigned int amount,int sposob_haszowania) = 0;
  virtual void test(unsigned int amount,int sposob_haszowania) = 0;
  virtual void restart() = 0;
  virtual ~Measurable(){};
};

#endif
