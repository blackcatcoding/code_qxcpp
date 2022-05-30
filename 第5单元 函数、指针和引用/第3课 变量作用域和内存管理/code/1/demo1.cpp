#include <iostream>
#include <cstdio>
using namespace std;

// 声明函数
void f();

void f2(){
    cout << "我是f2" << endl;
}

int main() {
	
    // 调用函数
    f();

    // cout << a << endl;

    int b;
    cout << b << endl;

    int c[110];
    for(int i = 0; i < 110; i++) cout << c[i] << endl;

	return 0;
}

// 实现函数
void f(){
    int a = 10;
    cout << a << endl;
    f2();
}

