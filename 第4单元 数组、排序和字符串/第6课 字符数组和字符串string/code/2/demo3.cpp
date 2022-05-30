#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {

    string str;
    int n;
    // scanf("%d\n", &n);
    cin >> n;
    cin.ignore();
    getline(cin, str);
    cout << str << endl;
	
	return 0;
}

