#include <iostream>
#include <cstdio>
#include <cstdarg>
using namespace std;

double average(int n, ...){

    va_list valist;
    double sum = 0.0;
    va_start(valist, n);
    for(int i = 1;  i <= n; i++){
        sum += va_arg(valist, int);
    }
    va_end(valist);

    return sum / n;
}

int main() {

    cout << average(3, 5, 10, 15) << endl;
    cout << average(6, 8, 9, 3, 5, 10, 15) << endl;
	
	return 0;
}

