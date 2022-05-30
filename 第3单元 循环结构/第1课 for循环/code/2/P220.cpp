#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n;
  	cin >> n;
  	double oldv, newv;
  	for(int i = 1; i <= n; i++){
    	int total, ok;
      	cin >> total >> ok;
      	if(i == 1) oldv = ok * 1.0 / total;
      	else{
        	newv = ok * 1.0 / total;
          	if(newv - oldv > 0.05) cout << "better" << endl;
          	else if(oldv - newv > 0.05) cout << "worse" << endl;
          	else cout << "same" << endl;
        }
    }
	
	return 0;
}


