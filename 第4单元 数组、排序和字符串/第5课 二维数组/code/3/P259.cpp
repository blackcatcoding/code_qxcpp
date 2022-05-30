#include <iostream>
#include <cstdio>
#include <cmath>
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
          	if(i == 1 || i == n || j == 1 || j == m) cout << a[i][j] << " ";
          	else{
            	int t = round((a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1]) / 5.0);
          	cout << t << " ";
            }	
        }
      	puts("");
    }
      	
	return 0;
}
