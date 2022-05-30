#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    for(int i = 1; i <= 10; i++){
        if(i == 6) continue;
        cout << i << " : "; 
        cout << "我是黑猫" << endl;
        // if(i == 6) break;
    }

    cout << "over" << endl;
	
	return 0;
}

