#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  
  	double x1, y1, x2, y2, ans;
  	cin >> x1 >> y1 >> x2 >> y2;
  	ans = sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
  	printf("%.3lf\n", ans);
	
	return 0;
}


