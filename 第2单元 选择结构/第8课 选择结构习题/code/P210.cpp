#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int a, b;
  	char op;
  	cin >> a >> b >> op;
  
  	switch(op){
      	case '+':cout << a + b << endl; break;
        case '-':cout << a - b << endl; break;
        case '*':cout << a * b << endl; break;
        case '/':
        	if(b) cout << a / b << endl;
        	else cout << "Divided by zero!" << endl;
        	break;
      	default: cout << "Invalid operator!" << endl;
    }
	
	return 0;
}


