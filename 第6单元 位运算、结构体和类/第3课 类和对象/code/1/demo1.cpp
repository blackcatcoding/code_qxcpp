#include <iostream>
#include <cstdio>
using namespace std;

class Fruit{
public:
    int price;
    void print(){
        cout << price << endl;
    }
};

int main() {

    Fruit apple;
    apple.price = 10;
    apple.print();

    Fruit banana;
    banana.price = 20;
    banana.print();
	
	return 0;
}

