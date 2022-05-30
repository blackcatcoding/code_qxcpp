#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a = 100;
    char ch = 'B';
    int *p;
    *p = 100;
    cout << *p << endl;

    printf("%p %p\n", &a, &ch);
	
	return 0;
}

