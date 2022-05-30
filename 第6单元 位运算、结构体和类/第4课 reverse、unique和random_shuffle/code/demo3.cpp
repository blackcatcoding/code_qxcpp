#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> v({1, 1, 2, 2, 3, 4, 5});
    v.erase(unique(v.begin(), v.end()), v.end());
    /*
    int p = unique(v.begin(), v.end()) - v.begin();
    cout << p << endl;
    */
    
    /*
    for(int i = 0; i < p; i++)
        cout << v[i] << " ";
    */
    
    for(auto x : v)
        cout << x << " ";
    
	
	return 0;
}

