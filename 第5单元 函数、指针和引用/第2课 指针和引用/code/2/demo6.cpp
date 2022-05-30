#include <iostream>
#include <cstdio>
using namespace std;

int f(int& x){
    x *= 2;
    return x * 3;
}

int main() {

    int a = 10;
    cout << f(a) << " " << a << endl;
	
	return 0;
}

