#include <iostream>
#include <cstdio>
using namespace std;

int m, n, ans = 0;

int main() {
  
  	cin >> m >> n;
  	for(int i = 1; i <= n; i++){
    	int t;
      	cin >> t;
      	if(t > m) ans++;
      	else m -= t;
    }
  
  	cout << ans << endl;
	
	return 0;
}
