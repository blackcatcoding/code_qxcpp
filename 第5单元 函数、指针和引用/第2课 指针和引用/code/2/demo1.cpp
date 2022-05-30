#include <iostream>
#include <cstdio>
using namespace std;

int a[5];
int* pa = a;

int main() {

    for(int i = 0; i < 5; i++)
        scanf("%d", a + i);

    for(int i = 0; i < 5; i++)
        printf("a[%d]=%d\n", i, *(a + i));
	
	return 0;
}

