#include <iostream>
#include <cstdio>
using namespace std;

int n, x, ans = 0;
int a[110];

int main() {
  
 	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	
  	cin >> x;
  
  	for(int i = 1; i <= n; i++){
    	if(x == a[i]){
        	ans = i;
          	break;
        }
    }
  
  	cout << ans << endl;
	
	return 0;
}

