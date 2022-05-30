#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;
int n;
int a[N];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	for(int i = n; i >= 1; i--) cout << a[i] << " ";
	
	return 0;
}
