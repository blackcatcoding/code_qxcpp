#include <iostream>
#include <cstdio>
using namespace std;

void swap1(int a, int b){
    int t = a;
    a = b;
    b = t;
    cout << "函数内部: " << a << " " << b << endl;
}

void swap2(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

void swap3(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

int main() {

    int a = 1, b = 2;

    // swap1(a, b);
    // swap2(&a, &b);
    swap3(a, b);

    cout << "函数外部：" << a << " " << b << endl;
	
	return 0;
}

