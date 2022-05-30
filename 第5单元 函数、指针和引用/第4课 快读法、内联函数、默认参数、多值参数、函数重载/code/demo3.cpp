// 快读法

#include <iostream>
#include <cstdio>
#define N 110
using namespace std;

int n;
int a[N];

inline int read(){
    int x = 0;
    int f = 1;
    char ch = getchar();

    while(ch < '0' || ch > '9'){
        if(ch == '-') f = -1;
        ch = getchar();
    }

    // -123  123 456

    while(ch >= '0' && ch <= '9'){
        x = x * 10 + ch - '0';
        ch = getchar();
    }

    return x * f;
}

int main() {

    n = read();
    for(int i = 1; i <= n; i++)
        a[i] = read();

    for(int i = 1; i <= n; i++) cout << a[i] << " ";
	
	return 0;
}

