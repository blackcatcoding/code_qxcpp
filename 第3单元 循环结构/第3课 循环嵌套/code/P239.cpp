#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int a, b, c, ans = 0;
  	cin >> a >> b >> c;
  	for(int i = 0; i <= 1000; i++)
      	for(int j = 0; j <= 1000; j++)
          	if(a * i + b * j == c)
              	ans++;
  
  	cout << ans << endl;
	
	return 0;
}


