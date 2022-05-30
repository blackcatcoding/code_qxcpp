#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  
  	int x1, y1, x2, y2, ans;
  	cin >> x1 >> y1 >> x2 >> y2;
  	ans = abs(x1 - x2) + abs(y1 - y2);
  
  	cout << ans << endl;
	
	return 0;
}


