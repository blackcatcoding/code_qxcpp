#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int a, b, c;
  	cin >> a >> b >> c;
  	for(int i = 2; i <= max(max(a, b), max(a, c)); i++){
    	if((a % i == b % i) && (a % i == c % i)){
        	cout << i << endl;
          	break;
        }
    }
	
	return 0;
}
