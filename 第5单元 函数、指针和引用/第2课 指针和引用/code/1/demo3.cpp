#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a = 100, b = 200;
    // 指向常量的指针
    // 修饰*，指针指向可以改变，指针指向的内存区域不可以更改
    const int * p1 = &a;
    // *p1 = 111;
    p1 = &b;
    cout << *p1 << endl;

    // 指针常量
    // 修饰p2，指针指向的内存区域可以改变，指针指向不可以改变
    int * const p2 = &a;
    // p2 = &b;
    *p2 = 222;
    cout << *p2 << endl;
	
	return 0;
}

