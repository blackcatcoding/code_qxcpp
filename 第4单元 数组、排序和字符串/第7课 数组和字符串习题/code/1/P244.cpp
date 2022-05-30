#include <iostream>
#include <cstdio>
using namespace std;

const int N = 15;

int n;
int a[N][N];
int cnt = 0;

int main() {
  
  	cin >> n;
  	
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= i; j++)
          	a[i][j] = ++cnt;
    }
  
  	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= i; j++)
          	printf("%5d", a[i][j]);
      	puts("");
    }
     
	return 0;
}


