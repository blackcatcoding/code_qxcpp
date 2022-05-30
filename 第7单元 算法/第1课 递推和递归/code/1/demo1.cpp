#include <iostream>
#include <cstdio>
using namespace std;

int cnt = 0;
void f(){
    cout << ++cnt << " hello cat." << endl;
    f();
}
int main() {
	
    f();

	return 0;
}

