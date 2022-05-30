#include <iostream>
#include <cstdio>
using namespace std;

const double PI = 3.14;
class Circle{
private:
    double m_r;
public:
    void setR(double r){
        if(r < 0){
            cout << "半径赋值不合法" << endl;
            m_r = 0;
        }
        else
            m_r = r;
    }

    double getC(){
        return 2 * PI * m_r;
    }

    double getS(){
        return PI * m_r * m_r;
    }
};

int main() {

    Circle circle;
    circle.setR(10);
    cout << circle.getC() << endl;
    cout << circle.getS() << endl;
	
	return 0;
}

