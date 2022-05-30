#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	
    for(int i = 0; i <= 35; i++){
        int j = 35 - i;
        if(i * 2 + j * 4 == 94)
            cout << i << " " << j << endl;
    }

	return 0;
}

