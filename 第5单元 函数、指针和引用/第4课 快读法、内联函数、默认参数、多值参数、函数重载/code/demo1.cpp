#include <iostream>
#include <cstdio>
#define N 110
#define For(i, a, b) for(register int i = (a); i <= (b); i++)
using namespace std;

int n;
int a[N];

int main() {

    cin >> n;
    For(i, 1, n) cin >> a[i];
    For(i, 1, n) cout << a[i] << " ";
    /*
    for(register int i = 1; i <= n; i++) cin >> a[i];
    for(register int i = 1; i <= n; i++) cout << a[i] << " ";
	*/
	return 0;
}

