#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int m, t, s;
  
  	cin >> m >> t >> s;
  	
  	if(!t){
    	cout << 0 << endl;
      	return 0;
    }
  	
  	m -= s / t;
  	if(s % t) m -= 1;
  	if(m < 0) m = 0;
  
  	cout << m << endl;
	
	return 0;
}


