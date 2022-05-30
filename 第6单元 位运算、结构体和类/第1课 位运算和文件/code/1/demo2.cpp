#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);

    int a, b;
    cin >> a >> b;
    int c = a | b;

    cout << c << endl;

    fclose(stdin);
    fclose(stdout);

	return 0;
}

