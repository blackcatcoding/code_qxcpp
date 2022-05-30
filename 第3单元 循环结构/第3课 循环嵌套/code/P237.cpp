#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int main() {
  	
  	int n;
  	LL t = 1, sum = 0;
  	cin >> n;
  
  	for(int i = 1; i <= n; i++){
    	t *= i;
      	sum += t;
    }
  
  	cout << sum << endl;
	
	return 0;
}


