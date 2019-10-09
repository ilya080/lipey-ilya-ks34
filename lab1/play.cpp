#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int number (int i){
	int a=1; int b=21;int c[3];
	srand(time(NULL));
	c[0]=a+rand()%(b-a);
	c[1]=a+rand()%(b-a);
	c[2]=a+rand()%(b-a);
	return c[i];	
}

