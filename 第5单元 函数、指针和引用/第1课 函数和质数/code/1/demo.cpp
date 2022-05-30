#include <iostream>
#include <cstdio>
using namespace std;

void print(){
    cout << "hello cat." << endl;
    cout << "hello cat." << endl;
    return;
}

int get_value(){
    return 789;
    cout << "我不会执行" << endl;
}

int add(int a, int b){
    return a + b;
}

void set_value(int x){
    x = 10;
    cout << x << endl;
}

int main() {
	
    print();

    cout << get_value() << endl;

    int ret = add(1, 2);

    cout << ret << endl;

    int x = 5;
    set_value(x);

    cout << x << endl;

	return 0;
}

