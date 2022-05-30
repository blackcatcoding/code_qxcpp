#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char str[110];

void myswap(char& a, char& b){
    char t = a;
    a = b;
    b = t;
}

void work(char* str){
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++)
        myswap(str[i], str[len - i - 1]);
}

int main() {

    char * pstr = str;
    cin.getline(pstr, 110);
    work(pstr);
    cout << pstr << endl;
	
	return 0;
}

