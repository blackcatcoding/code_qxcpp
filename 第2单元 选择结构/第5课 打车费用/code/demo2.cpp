#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    double height, weight, bmi;
    cin >> height >> weight;
    bmi = weight / (height * height);

    if(bmi < 18.5) cout << "偏瘦";
    else if(bmi < 24) cout << "正常";
    else if(bmi < 28) cout << "偏胖";
    else if(bmi < 40) cout << "肥胖";
    else cout << "极重度肥胖";
	
	return 0;
}

