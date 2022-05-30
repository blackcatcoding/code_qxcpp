#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // [start, end)
    int a[10] = {6, 7, 8, 9, 1, 2, 3, 5};
    reverse(a + 0, a + 3 + 1);

    for(auto x : a)
        cout << x << " ";
	
	return 0;
}

