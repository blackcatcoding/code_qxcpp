#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {

    // char str[] = "hello cat";
    const char * str = "program";

    printf("%s\n", str);
    cout << str << endl;

    str = "hello";

    printf("%s\n", str);
    cout << str << endl;

    int len = strlen(str);
    for(int i = 0; str[i]; i++)
        cout << *(str + i);

    // str[0] = 'z';
	
	return 0;
}

