#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    char ch = 'B';
    putchar(ch);
    putchar('\x42');
    putchar(0x42);
    putchar(66);

    puts("Hello World.");
    puts("Hello World.");
	
	return 0;
}

