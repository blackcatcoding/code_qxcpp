#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a[10] = {1, 2, 3};

    // 前3个赋初值，后面默认为0
    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";
	
	return 0;
}

