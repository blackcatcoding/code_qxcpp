#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void f(int a, int b){
    cout << a + b << endl;
}

void f(int a, int b, int c){
    cout << a + b + c << endl;
}

void f(string a, string b){
    cout << a + b << endl;
}

int main() {

    f(2, 3);
    f(2, 3, 4);

    string a = "12", b = "45";
    f(a, b);
	
	return 0;
}

