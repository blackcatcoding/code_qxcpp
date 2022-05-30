#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, ans = 0;
  	char flag;
  	cin >> n >> flag;
  
  	if(n <= 1000) ans = 8;
  	else{
    	ans = 8 + (n - 1000) / 500 * 4;
      	if((n - 1000) % 500) ans += 4;
    }
  
  	if(flag == 'y') ans += 5;
  	
  	cout << ans << endl;
	
	return 0;
}


