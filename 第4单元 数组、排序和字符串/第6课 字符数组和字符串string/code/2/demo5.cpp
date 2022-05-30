#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str1 = "AaBbCcDd";
    /*
    for(int i = 0; i < str1.size(); i++)
        str1[i] = toupper(str1[i]);
    */
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    cout << str1 << endl;
	
	return 0;
}

