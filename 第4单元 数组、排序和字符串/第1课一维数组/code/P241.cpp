#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;
int n;
int a[N], b[N];
int ans = 0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	for(int i = 1; i <= n; i++){
    	cin >> b[i];
      	ans += a[i] * b[i];
    }
  
  	cout << ans << endl;
	
	return 0;
}
