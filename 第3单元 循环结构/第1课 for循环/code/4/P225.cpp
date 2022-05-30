#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, ans = 0;
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int t;
      	cin >> t;
      	int a = t % 10;
      	int b = t / 10 % 10;
      	int c = t / 100 % 10;
      	int d = t / 1000;
      	if(a - b - c - d > 0) ans++;
    }
  
  	cout << ans << endl;
	
	return 0;
}
