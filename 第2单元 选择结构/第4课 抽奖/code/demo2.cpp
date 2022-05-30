#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n, a;

    cout << "抽奖程序" << endl;
    cout << "请输入1-5之间任意一个整数：" << endl;
    cin >> n;
    srand(time(0));

    a = rand() % 5 + 1;

    if(n == a) cout << "恭喜你，中奖了！" << endl;
    else cout << "很遗憾，没有中奖" << endl;

    cout << "中奖号码是：" << a << endl;
	
	return 0;
}

