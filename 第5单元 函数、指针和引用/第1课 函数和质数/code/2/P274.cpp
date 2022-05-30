#include <iostream>
#include <cstdio>
using namespace std;

bool is_prime(int n){
	if(n < 2) return false;
  	
  	for(int i = 2; i <= n / i; i++)
      	if(n % i == 0)
          	return false;
  
  	return true;
}

int main() {
  
  	int n;
  	cin >> n;
  	for(int i = 2; i <= n / 2; i++){
      	int j = n - i;
    	if(is_prime(i) && is_prime(j)){
        	printf("%d = %d + %d\n", n, i, j);  
          	break;
        }
          	 
    }
	
	return 0;
}


