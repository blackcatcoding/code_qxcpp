#include <iostream>
#include <cstdio>
using namespace std;

const int N = 2010;

int n, m;
int a[N];

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	
  	while(m--){
    	int x;
      	cin >> x;
      	if(x >= a[n]) a[++n] = x;
      	else{
        	int idx = -1;
          	for(int i = 1; i <= n; i++){
            	if(x <= a[i]){
                	idx = i;
                  	break;
                }
            }
          
          	for(int i = ++n; i >= idx; i--)
              	a[i] = a[i - 1];
          	a[idx] = x;
        }
    }
  
  	for(int i = 1; i <= n; i++) cout << a[i] << " ";
	
	return 0;
}