#include<iostream>
#include"../inc/stoper.hh"

using namespace std;
void Stoper::start(void) {
	 gettimeofday(&t1, NULL);
}

void Stoper::stop(void) {
	 gettimeofday(&t2, NULL);

}

void Stoper::reset() {
  t1.tv_usec = 0;
  t1.tv_sec = 0;
  t2.tv_usec = 0;
  t2.tv_sec = 0;
}

long double Stoper::elapsed_Time(void) {
  elapsedTime = (t2.tv_sec - t1.tv_sec)*1000.0;
  elapsedTime += (t2.tv_usec - t1.tv_usec)/1000.0;

	return elapsedTime;
}
