#include <iostream>
#include <cstdio>
using namespace std;

int n;
int a[110];

void f(const int a[]){
    // a[1] *= 2;
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
}

void f2(const int* a){
    // a[1] *= 2;
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
}

int main() {

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    f(a);

    cout << endl << "---------------" << endl;

    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
	
	return 0;
}

