#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, cnt = 0, s = 0;
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int a, b;
      	cin >> a >> b;
      	if(a >= 90 && a <= 140 && b >= 60 && b <= 90) cnt++;
      	else{
        	s = max(s, cnt);
          	cnt = 0;
        }
    }
  
  	int ans = cnt > s ? cnt : s;
  	cout << ans << endl;
	
	return 0;
}
