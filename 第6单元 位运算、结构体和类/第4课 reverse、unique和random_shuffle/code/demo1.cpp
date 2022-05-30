#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // [start, end)
    vector<int> v({1, 2, 3, 4});

    reverse(v.begin(), v.end());

    for(auto x : v)
        cout << x << " ";
	
	return 0;
}

