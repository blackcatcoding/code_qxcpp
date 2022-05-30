#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	/*int a = 100;
	int* p = &a;

	cout << a << " " << *p << endl;
	printf("%p %p\n", &a, p);
	cout << sizeof(p) << endl;*/
	int* p;
	*p = 100;
	cout << *p << endl;

	return 0;
}

