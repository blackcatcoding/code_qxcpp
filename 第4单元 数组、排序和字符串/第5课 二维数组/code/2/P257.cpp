#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int m, n, k;
int a[N][N], b[N][N];

int main() {
  
  	cin >> n >> m >> k;
  
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= m; j++)
          	cin >> a[i][j];
  
  	for(int i = 1; i <= m; i++)
      	for(int j = 1; j <= k; j++)
          	cin >> b[i][j];
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= k; j++){
        	int t = 0;
          	for(int k = 1; k <= m; k++)
              	t += a[i][k] * b[k][j];
          	cout << t << " ";
        }  
      	puts("");
    }
      	
	return 0;
}


