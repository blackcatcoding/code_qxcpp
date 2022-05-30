#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int a = rand();
    
    cout << a << endl << RAND_MAX << endl;
	
	return 0;
}

