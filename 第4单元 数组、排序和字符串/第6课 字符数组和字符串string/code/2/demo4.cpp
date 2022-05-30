#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {

    string str1 = "1234";
    int a = stoi(str1);
    cout << a - 4 << endl;

    string str2 = to_string(6789);
    cout << str2 + str2 << endl;

    for(int i = 0; i < str2.size(); i++)
        cout << str2[i] << " ";
    cout << endl;

    for(auto x : str2)
        cout << x << " ";

    cout << endl;
	
	return 0;
}

