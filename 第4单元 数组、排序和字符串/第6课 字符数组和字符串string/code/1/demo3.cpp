#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	
    char str1[100], str2[100];
    cin >> str1 >> str2;
    // strcat(str1, str2);
    // strncat(str1, str2, 3);
    // strcpy(str1, str2);
    // strncpy(str1, str2, 3);
    // cout << str1 << endl << str2 << endl;

    // int ret = strcmp(str1, str2);
    // int ret = strncmp(str1, str2, 3);
    // cout << ret << endl;

    int len = strlen(str1);
    cout << len << endl;

    for(int i = 0; i < len; i++)
        cout << str1[i] << " ";
    cout << endl;

    for(int i = 0; str2[i]; i++)
        cout << str2[i] << " ";

	return 0;
}

