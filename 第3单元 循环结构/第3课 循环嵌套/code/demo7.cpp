#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    for(int i = 0; i <= 100 / 5; i++)
        for(int j = 0; j <= 100 / 3; j++){
            int k = 100 - i - j;
                if(5 * i + 3 * j + k / 3 == 100 && k % 3 == 0)
                    cout << i << " " << j << " " << k << endl;
        }
	
	return 0;
}

