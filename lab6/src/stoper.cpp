#include<iostream>
#include"../inc/stoper.hh"

using namespace std;
void Stoper::start(void) {
	 gettimeofday(&t1, NULL);
}

void Stoper::stop(void) {
	 gettimeofday(&t2, NULL);

}

long double Stoper::elapsed_Time(void) {
  elapsedTime = (t2.tv_sec - t1.tv_sec)*100000.0;
  elapsedTime += (t2.tv_usec - t1.tv_usec)/100000.0;

	return elapsedTime;
}
