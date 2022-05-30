#include <iostream>
#include <cstdio>
using namespace std;

static void f2() {
	cout << "我是静态函数f2" << endl;
}

void f1() {
	cout << "我是f1" << endl;
	f2();
}
