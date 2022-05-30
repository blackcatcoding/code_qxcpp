#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << hex << setw(3) << a << setw(3) << b << endl;
    cout << setfill('#') << oct << a << setw(3) << b << endl;
    cout << setfill('$') << dec << a << setw(3) << b << endl;
	
	return 0;
}

