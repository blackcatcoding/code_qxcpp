#include <iostream>
#include <cstdio>
using namespace std;

int n;
int sum1 = 0, sum2 = 0, sum3 = 0, sum = 0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int a, b, c;
   		cin >> a >> b >> c;
      	sum1 += a;
      	sum2 += b;
      	sum3 += c;
    }
  
  	sum = sum1 + sum2 + sum3;
  	cout << sum1 << " " << sum2 << " " << sum3 << " " << sum << endl;
	
	return 0;
}


