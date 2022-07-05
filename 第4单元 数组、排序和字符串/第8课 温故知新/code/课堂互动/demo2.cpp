#include <iostream>
using namespace std;

int main() {

	int n, x, s = 0;
	cin >> n;
	x = n;
	while(x >= 1){
		if(n % x == 0) ++s;
		--x;
	}

	cout << s << endl;
	
	return 0;
}

