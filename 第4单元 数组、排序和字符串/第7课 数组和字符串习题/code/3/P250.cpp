#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25;

int n;
int a[N][N];

int main() {
  
  	cin >> n;
  
  	int dx[] = {0, -1, 0, 1}, dy[] = {1, 0, -1, 0};
  	int x = n, y = 1, d = 0;
	
  	for(int i = 1; i <= n * n; i++){
    	a[x][y] = i;
      	int nx = x + dx[d], ny = y + dy[d];
      
      	if(nx < 1 || nx > n || ny < 1 || ny > n || a[nx][ny]){
        	d = (d + 1) % 4;
          	nx = x + dx[d], ny = y + dy[d];
        }
      	x = nx, y = ny;
    }
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++)
          	printf("%5d", a[i][j]);
      	puts("");
    }
	
	return 0;
}


