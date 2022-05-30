#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, m;
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= m; j++){
        	int t;
          	cin >> t;
          	if(t) printf("%d %d %d\n", i, j, t);
        }
	
	return 0;
}