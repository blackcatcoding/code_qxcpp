#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	
    for(int i = 0; i <= 35; i++){
        for(int j = 0; j <= 35; j++)
            if(i + j == 35 && i * 2 + j * 4 == 94)
                cout << i << " " << j << endl;
    }

	return 0;
}

