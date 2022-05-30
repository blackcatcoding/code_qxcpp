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
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= m; j++){
        	int t;
          	cin >> t;
          	cout << a[i][j] + t << " ";
        }
      	puts("");
    }
      	
	return 0;
}


