#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int b[N]; // int n; int b[n]; 错误 n是变量

int main() {

    int a[10] = {};

    // 默认为0
    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";
    puts("");

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        // cin >> b[i];
        // scanf("%d", &b[i]);
        scanf("%d", b + i);


    for(int i = 1; i <= n; i++)
        cout << b[i];
	
	return 0;
}

