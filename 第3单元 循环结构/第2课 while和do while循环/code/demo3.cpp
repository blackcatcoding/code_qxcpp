#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int m, sum = 0, i = 0;
  	cin >> m;
  
  	while(sum <= m)
      	sum += ++i;
  
  	cout << i << endl;
	
	return 0;
}

