#ifndef IQUEUE_HH
#define IQUEUE_HH

class Ikolejka {
  public:
  virtual void wyswietl_kolejke()=0;
  virtual void push(int value)=0;
  virtual int pop()=0;
  virtual void size()=0;
  virtual void empty()=0;
  virtual void ustaw(unsigned int amount)=0;
  virtual void restart()=0;
 virtual int find(int numb)=0;
};

#endif
