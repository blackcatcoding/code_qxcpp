#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25;

int n;
int a[N][N];
int cnt = 0;

int main() {
  
  	cin >> n;
  	for(int k = 1; k <= n; k++){
    	if(k % 2 == 0)
          	for(int i = 1; i <= k; i++){
            	int j = n - k + i;
              	a[i][j] = ++cnt;
              	a[n + 1 - i][n + 1 - j] = n * n + 1 - cnt;
            }
      	else
          	for(int i = k; i>= 1; i--){
            	int j = n - k + i;
              	a[i][j] = ++cnt;
              	a[n + 1 - i][n + 1 - j] = n * n + 1 - cnt;
            }      
    }
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++)
          	printf("%5d", a[i][j]);
      	puts("");
    }
	
	return 0;
}


