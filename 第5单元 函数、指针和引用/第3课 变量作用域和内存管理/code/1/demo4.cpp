#include <iostream>
#include <cstdio>
using namespace std;

void f(){
    static int a = 100;
    a++;
    cout << a << endl;
}

int main() {

    f();
    f();
    f();
    f();
    f();
    f();
	
	return 0;
}

