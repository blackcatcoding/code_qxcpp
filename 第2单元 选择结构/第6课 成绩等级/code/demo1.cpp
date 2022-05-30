#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int n;
    
    cin >> n;

    if(n >= 90) cout << "A" << endl;
    else if(n >= 70) cout << "B" << endl;
    else if(n >= 60) cout << "C" << endl;
    else cout << "D" << endl;
	
	return 0;
}

