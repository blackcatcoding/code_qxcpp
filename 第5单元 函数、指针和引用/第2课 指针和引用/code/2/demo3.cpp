#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a = 1, b = 2, c = 3;
    int* p[] = {&a, &b, &c};

    for(int i = 0; i < sizeof(p) / sizeof(p[0]); i++)
        cout << *p[i] << " ";
	
	return 0;
}

