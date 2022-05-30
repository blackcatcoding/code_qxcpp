#include <iostream>
#include <cstdio>
using namespace std;

// f(x) = k * x + b

int f(int x, int k = 1, int b = 0){
    return k * x + b;
}

int main() {

    cout << f(1) << endl;
    cout << f(2, 3) << endl;
    cout << f(2, 3, 5) << endl;
	
	return 0;
}

