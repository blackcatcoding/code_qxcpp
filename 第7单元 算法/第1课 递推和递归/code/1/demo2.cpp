#include <iostream>
#include <cstdio>
using namespace std;

int fact(int n){
    // 返回条件 基线条件
    if(n == 0) return 1;
    return n * fact(n - 1);
}

int main() {

    cout << fact(5) << endl;
	
	return 0;
}

