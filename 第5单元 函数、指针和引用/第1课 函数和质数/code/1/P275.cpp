#include <iostream>
#include <cstdio>
using namespace std;

void print(int n, char ch){
	for(int i = 1; i <= n; i++) cout << ch;
  	puts("");
}

int main() {
  
  	int n;
  	char ch;
  	cin >> n >> ch;
  	for(int i = 1; i <= n; i++)
      	print(i, ch);
	
	return 0;
}


