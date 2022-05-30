#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int a[N][N];

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= m; j++)
          	cin >> a[i][j];
  
  	// n = 2 m = 3
  	for(int i = 1; i <= m; i++){
    	for(int j = 1; j <= n; j++)
        	cout << a[j][i] << " ";
      	puts("");
    }
      	
	return 0;
}
