#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int n;
    char str[100];
    // cin >> str;
    // scanf("%s", str);
    cin >> n;
    cin.ignore();
    cin.getline(str, 100);
    cout << str << endl;
	
	return 0;
}

