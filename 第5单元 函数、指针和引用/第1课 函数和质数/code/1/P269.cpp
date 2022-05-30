#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double S(double a, double b, double c){
	double p = (a + b + c) / 2;
  	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
  
  	double x1, y1, x2, y2, x3, y3, a, b, c;
  	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  	a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  	b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  	c = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  
  	printf("%.2lf\n", S(a, b, c));
	
	return 0;
}


