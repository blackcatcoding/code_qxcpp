#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n;
  	double sum = 0.0;
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	double t;
      	cin >> t;
      	sum += t;
    }
  	
  	printf("%.4lf\n", sum / n);
	
	return 0;
}


