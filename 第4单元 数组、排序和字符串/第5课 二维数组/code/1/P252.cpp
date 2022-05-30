#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25;

int n;
int a[N][N];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= n; j++){
        	cin >> a[i][j];
          	if(i == j || i + j == n + 1) a[i][j] += 10;
        }
          
	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++)
          	cout << a[i][j] << " ";
      	puts("");
    }
      
	return 0;
}