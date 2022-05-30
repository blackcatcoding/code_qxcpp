#include <iostream>
#include <cstdio>
using namespace std;

/*
const int N = 1e8 + 10;
int a[N];
*/

int main() {
    
    int* p = new int(3);
    cout << *p << endl;

    delete p;   // 释放空间

    cout << *p << endl;

    int* p2 = new int;
    cout << *p2 << endl;

	return 0;
}

