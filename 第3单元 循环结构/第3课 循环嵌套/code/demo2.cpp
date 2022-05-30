#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    char ch;
    cin >> ch;

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cout << ch;
        puts("");
    }
	
	return 0;
}

