#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a = 10;
    int& b = a; // int* const b = &a;

    b = 20; // *b = 20;

    cout << a << " " << b << endl;
	
	return 0;
}

