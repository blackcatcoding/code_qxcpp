#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, maxv = -1, minv = 0x3f3f3f3f;
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int t;
      	cin >> t;
      	maxv = max(maxv, t);
      	minv = min(minv, t);
    }
  
  	cout << maxv - minv << endl;
	
	return 0;
}


