#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n, q = 2, p = 1;
  	double ans = 0.0;
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	ans += q * 1.0 / p;
      	int t = q;
      	q = p + q;
      	p = t;
    }
  
  	printf("%.4lf\n", ans);
	
	return 0;
}
