#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, m, ans = 0;
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++){
    	int t;
      	cin >> t;
      	if(t == m) ans++;
    }
   
	cout << ans << endl;
  
	return 0;
}


