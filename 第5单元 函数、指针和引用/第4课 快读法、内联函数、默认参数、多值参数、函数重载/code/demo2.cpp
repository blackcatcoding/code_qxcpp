#include <iostream>
#include <cstdio>
#define f2(a, b) ((a) < (b) ? (a) : (b))
using namespace std;

inline int f(int a, int b){
    return a < b ? a : b;
}

int main() {

    int a = 1, b = 3;
    // int c = f2(++a, b); // ((++a) < (b) ? (++a) : (b))
    // cout << c << endl;
    //  cout << c << " " << a << " " << b << endl;
    
    int c = f(++a, b);
    cout << c << " " << a << " " << b << endl;
    
	
	return 0;
}

