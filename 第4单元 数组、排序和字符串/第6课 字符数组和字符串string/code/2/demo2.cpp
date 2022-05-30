#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {

    string str1, str2;
    cin >> str1 >> str2;
    cout << str1 << " " << str2 << endl;
    int ret = str1 < str2;
    cout << ret << endl;
	
	return 0;
}

