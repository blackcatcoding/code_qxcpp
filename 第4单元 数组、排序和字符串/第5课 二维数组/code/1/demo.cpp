#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << a << endl;
    cout << a[0] << " " << a[1] << endl;

    printf("%d %p\n", a[0][0], &a[0][0]);
    printf("%d %p\n", a[0][1], &a[0][1]);
    printf("%d %p\n", a[0][2], &a[0][2]);
    printf("%d %p\n", a[1][0], &a[1][0]);
    printf("%d %p\n", a[1][1], &a[1][1]);
    printf("%d %p\n", a[1][2], &a[1][2]);

	
	return 0;
}

