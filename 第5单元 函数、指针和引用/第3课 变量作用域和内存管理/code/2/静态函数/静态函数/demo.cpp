#include <iostream>
#include <cstdio>
using namespace std;

static void f2() {
	cout << "���Ǿ�̬����f2" << endl;
}

void f1() {
	cout << "����f1" << endl;
	f2();
}
