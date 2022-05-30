#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int a, b, c = 1;
  	cin >> a >> b;
  	for(int i = 1; i <= b; i++){
    	c *= a;
      	c %= 1000;
    }
  
  	printf("%03d\n", c);
	
	return 0;
}
