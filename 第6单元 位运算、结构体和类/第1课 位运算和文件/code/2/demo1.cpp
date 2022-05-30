#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int INF = 0x3f3f3f3f;

int main() {

    int a[10] = {1, 2, 3, 4, 5, 6};
    // memset(a, 0, sizeof a);
    // memset(a, 0x3f, sizeof a);
    memset(a, -1, sizeof a);
    for(auto x : a)
        cout << x << " ";
    puts("");

    /*
    if(a[0] == INF) cout << "YES" << endl;
    else cout << "NO" << endl;
    */
	
	return 0;
}

