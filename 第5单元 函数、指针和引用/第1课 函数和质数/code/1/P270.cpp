#include <iostream>
#include <cstdio>
using namespace std;

bool is_leap(int year){
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
      	return true;
  	return false;
}

int main() {
  
  	int x, y, ans = 0;
  	cin >> x >> y;
  	for(int i = x; i <= y; i++)
      	if(is_leap(i))
          	ans++;
  
  	cout << ans << endl;
	
	return 0;
}


