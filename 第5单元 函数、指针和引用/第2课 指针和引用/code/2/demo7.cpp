#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a[5] = {1, 2, 3, 4, 5};

    int(&aref)[5] = a;

    aref[0] = 6;

    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";
	
	return 0;
}

