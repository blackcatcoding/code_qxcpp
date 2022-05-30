#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int a[110];

int main() {

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];

    // 默认从小大大排序
    sort(a + 1, a + n + 1);

    for(int i = 1; i <= n; i++) cout << a[i] << " ";
	
	return 0;
}

