#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int lucheng, shijian;

    double feiyong = 0;

    cin >> lucheng;

    if(lucheng > 10)
        feiyong = 6 + 8*1.8 + (lucheng-10)*1.8*1.5;
    else
        if(lucheng > 2)
            feiyong = 6 + (lucheng-2)*1.8;
        else
            feiyong = 6;

    cin >> shijian;
    feiyong += shijian / 3;

    cout << feiyong << endl;
	
	return 0;
}

