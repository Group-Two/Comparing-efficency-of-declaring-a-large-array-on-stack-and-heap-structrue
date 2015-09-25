//============================================================================
// Name        : lab2-1.cpp
// Author      : jjt
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	   clock_t start,finish;
	   int i;

	   start = clock();

	   for (i=1;i<=200000;i++) {
		   int a[1000]={0};
	   }

	   finish = clock();

	   double duration1 = (double)(finish-start)/CLOCKS_PER_SEC;
	   printf( "Time to call a large array on stack is: %.5f\n",duration1) ;

	   start = clock();

	   for (i=1;i<=200000;i++) {
	   	   int *a = new int[1000];
	   }

	   finish = clock();

	   double duration2 = (double)(finish-start)/CLOCKS_PER_SEC;
	   printf( "Time to call a large array on heap is: %.5f",duration2) ;
}
