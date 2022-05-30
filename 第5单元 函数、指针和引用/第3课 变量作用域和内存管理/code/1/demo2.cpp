#include <iostream>
#include <cstdio>
using namespace std;

int a = 20;

void f(){
    cout << "函数内部a = " << a << endl;
    a = 30;
}

int main() {

    f();

    cout << "函数外部a = " << a << endl;
	
	return 0;
}

