#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  
  	int a, b;
  	cin >> a >> b;
  	// cout << b << " " << a << endl;
  	/*
	  	int t = a;
	  	a = b;
	  	b = t;
    */
  
  	swap(a, b);
  
  	cout << a << " " << b << endl;
	
	return 0;
}
