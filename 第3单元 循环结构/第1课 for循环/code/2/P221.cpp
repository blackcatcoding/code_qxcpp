#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int n;
double ans = 0.0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	double x, y;
      	int z;
      	cin >> x >> y >> z;
      	ans += 2 * sqrt(x * x + y * y) / 50 + 1.5 * z;
    }
  
  	cout << ceil(ans) << endl;
	
	return 0;
}
