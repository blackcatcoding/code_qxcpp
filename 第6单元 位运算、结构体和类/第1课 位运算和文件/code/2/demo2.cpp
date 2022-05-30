#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a[10] = {};
    fill(a + 0, a + 5 + 1, 123);
    for(int i = 9; ~i; i--)
        cout << a[i] << " ";
	
	return 0;
}

