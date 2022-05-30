#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

int main() {
  
  	int n;
  	scanf("%d\n", &n);
  
  	while(n--){
    	string line;
       	getline(cin, line);
      	stringstream ssin(line);
      	int x, ans = 0;
      	while(ssin >> x) ans += x;
      	cout << ans << endl;
    }
	
	return 0;
}


