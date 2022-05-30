#include <iostream>
#include <cstdio>
using namespace std;

int a = 10;
int* p;
int** pp;
int*** ppp;

int main() {

    p = &a;
    pp = &p;
    ppp = &pp;

    printf("a=%d=%d=%d\n", *p, **pp, ***ppp);
	
	return 0;
}

