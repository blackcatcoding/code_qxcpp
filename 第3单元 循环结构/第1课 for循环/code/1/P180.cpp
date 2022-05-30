#include <iostream>
#include <cstdio>
using namespace std;

const int INF = 0x3f3f3f3f;
// 0x7fffffff 

int main() {
  
  	int n, ans = -INF;
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int t;
      	cin >> t;
      	ans = max(ans, t);
    }
      	
	cout << ans << endl;
  
	return 0;
}

