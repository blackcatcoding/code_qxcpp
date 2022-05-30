#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  
  	double a, b, c, x1, x2, s, delta;
  	cin >> a >> b >> c;
  
  	delta = b * b - 4 * a * c;
  
  	x1 = (-b + sqrt(delta)) / (2 * a);
  	x2 = (-b - sqrt(delta)) / (2 * a);
  	s = -b / (2 * a);
  
  	if(fabs(delta) < 0.001) printf("%.3lf\n", s);
  	else if(delta > 0) {
    	double t1 = max(x1, x2);
      	double t2 = min(x1, x2);
      	printf("%.3lf %.3lf\n", t1, t2);
    }
  	else cout << "NOANSWER" << endl;
	
	return 0;
}


