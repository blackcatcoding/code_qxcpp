#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  
  	int n;
  	double ans = 0.0;
  	cin >> n;
  	for(int i = 1; i <= n; i++)
      	ans += pow(-1.0, i - 1) / i;
  	
  	printf("%.4lf\n", ans);
	
	return 0;
}
