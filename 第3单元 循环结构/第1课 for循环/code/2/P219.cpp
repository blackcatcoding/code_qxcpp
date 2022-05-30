#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  
  	int x, n;
  	cin >> x >> n;
  	double ans = x * pow(1.001, n);
  
  	printf("%.4lf\n", ans);
	
	return 0;
}


