#include <iostream>
#include <cstdio>
using namespace std;

int n, m;
int ans = 0;

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= m; j++){
        	int t;
          	cin >> t;
          	if(i == 1 || i == n || j == 1 || j == m) ans += t;
        }
    }
  
  	cout << ans << endl;
	
	return 0;
}

