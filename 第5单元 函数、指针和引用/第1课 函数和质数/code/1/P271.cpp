#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int digit(LL n, int k){
	int ret;
  	for(int i = 1; i <= k; i++){
    	ret = n % 10;
      	n /= 10;
    }
  	return ret;
}

int main() {
  
  	LL n;
  	int k;
  	cin >> n >> k;
  	cout << digit(n, k) << endl;
	
	return 0;
}
