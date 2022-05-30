#include <iostream>
#include <cstdio>
using namespace std;

int a[5];
int* pa = a;

int main() {

    for(int i = 0; i < 5; i++)
        scanf("%d", a + i);

    for(int i = 0; i < 5; i++){
        printf("%d ", *pa);
        pa++;
    }
	
	return 0;
}

