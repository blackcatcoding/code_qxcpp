#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, sum = 0;
  	
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int t;
      	cin >> t;
      	sum += t;
    }
  
  	double ave = sum * 1.0 / n;
  	
  	printf("%.2lf\n", ave);
	
	return 0;
}

