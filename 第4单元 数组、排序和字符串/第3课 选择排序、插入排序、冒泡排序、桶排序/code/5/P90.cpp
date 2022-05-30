// 1 2 3 .... 99 100
// 50 25 37    2^7 > 100
// ¶þ·Ö·¨  logn   MlogN 
// 1 2 3 3 3 3 4 5 6 7

#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6 + 10;

int n, m;
int a[N];

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	
  	while(m--){
    	int x;
      	cin >> x;
      	int L = 1, R = n, mid;
      	while(L <= R){
        	mid = L + R >> 1;
          	if(a[mid] == x) break;
          	else if(a[mid] > x) R = mid - 1;
          	else L = mid + 1;
        }
      
      	int ans = 0;
      	int k = mid - 1;
      	while(a[k] == x && k >= 1){
        	ans++;
          	k--;
        }
      
      	k = mid;
      	while(k <= n && a[k] == x){
        	ans++;
          	k++;
        }
      	cout << ans << " ";
    }
	
	return 0;
}


