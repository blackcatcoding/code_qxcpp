#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int a = 0, b = 0;
  	for(int i = 1; i <= 12; i++){
    	int t;
      	cin >> t;
      	a += 300 - t;
      	if(a < 0){
        	cout << -i << endl;
          	return 0;
        }
      
      	if(a >= 100){
        	b += 100 * (a / 100);
          	a %= 100;
        }
    }
  
  	cout << a + b * 1.2 << endl;
	
	return 0;
}


