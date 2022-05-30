#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

const int N = 3010;

int n;
int a[N], b[N];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	// for(int i = 2; i <= n; i++) b[i - 1] = abs(a[i] - a[i - 1]);
 	for(int i = 1; i <= n - 1; i++) b[i] = abs(a[i + 1] - a[i]);
  
  	sort(b + 1, b + n);
  
  	for(int i = 1; i <= n - 1; i++){
    	if(b[i] != i){
        	cout << "Not jolly" << endl;
          	return 0;
        }
    }
  
  	cout << "Jolly" << endl;
	
	return 0;
}

