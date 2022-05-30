#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25;

int n;
int a[N][N];
int cnt = 0;

int main() {
  
  	cin >> n;
  
  	int dx[] = {0, 1, 1, -1}, dy[] = {1, -1, 0, 1};
  	a[1][1] = 1;
  	int x = 1, y = 1, d = 0;
  	for(int i = 2; i <= n * n; i++){
    	x += dx[d], y += dy[d];
      	a[x][y] = i;
      	switch(d){
          	case 0:	// ср
            	if(x == 1) d = 1;
            	else if(x == n) d = 3;
            	break;
          	case 1:
            	if(y == 1 && x == n) d = 0;
            	else if(y == 1) d = 2;
            	else if(x == n) d = 0;
            	break;
          	case 2:
            	if(y == 1) d = 3;
            	else if(y == n) d = 1;
            	break;
          	case 3:
            	if(x == 1 && y == n) d = 2;
            	else if(x == 1) d = 0;
            	else if(y == n) d = 2;
            	break;
        }
    }
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++)
          	printf("%5d", a[i][j]);
      	puts("");
    }
	
	return 0;
}
