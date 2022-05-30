#include <iostream>
#include <cstdio>
#include <algorithm>
#define aa first
#define bb second
using namespace std;

typedef pair<int, int> PII;
PII q[110];

int main() {

    q[0] = {2, 5};
    q[1] = {1, 6};
    q[2] = {3, 2};
    q[3] = {6, 9};
    q[4] = {7, 1};
    q[5] = {2, 1};
    
    sort(q, q + 6);
    for(int i = 0; i <= 5; i++)
        // cout << q[i].first << " " << q[i].second << endl;
        cout << q[i].aa << " " << q[i].bb << endl;
	
	return 0;
}

