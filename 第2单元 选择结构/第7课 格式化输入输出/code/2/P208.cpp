// an = a1 + (n - 1) * d
// a1 ��һ��   d ����  an��n��

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int a1, a2, n, d, ans;
  	cin >> a1 >> a2 >> n;
  	d = a2 - a1;
  	ans = a1 + (n - 1) * d;
  	cout << ans << endl;
	
	return 0;
}


