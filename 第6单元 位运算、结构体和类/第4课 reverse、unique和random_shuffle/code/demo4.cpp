#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

    int a[] = {1, 1, 2, 2, 3, 4, 5};

    int p = unique(a, a + 7) - a;
    for(int i = 0; i < p; i++)
        cout << a[i] << " ";
	
	return 0;
}

