#include <iostream>
#include <cstdio>
using namespace std;

int n;
int sum1 = 0, sum2 = 0, sum3 = 0, sum = 0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int t;
   		cin >> t;
      	if(t == 1)
      		sum1++;
      	if(t == 5)
            sum2++;
      	if(t == 10)
            sum3++;
    }
  	cout << sum1 << endl << sum2 << endl << sum3 << endl;
	
	return 0;
}
