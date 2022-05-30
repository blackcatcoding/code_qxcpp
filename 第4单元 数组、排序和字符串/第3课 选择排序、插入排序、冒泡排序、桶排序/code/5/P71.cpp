#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n;
int a[N];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	int ans = 0;
  	for(int i = 1; i <= n; i++){
    	int sum1 = 0, sum2 = 0;
      	for(int j = 1; j <= i - 1; j++)
          	if(a[j] > a[i]) sum1++;
      	for(int j = i + 1; j <= n; j++)
          	if(a[j] > a[i]) sum2++;
        if(sum1 == sum2) ans++;
    }
  
  	cout << ans << endl;
	
	return 0;
}


