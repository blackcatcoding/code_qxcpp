#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a = 10;
    double b = 3.5;
    void* p = NULL;
    p = &a;
    cout <<  *(int*)p << endl;

    p = &b;
    cout <<  *(double*)p << endl;

    cout << *(long long*)p << endl;
	
	return 0;
}

