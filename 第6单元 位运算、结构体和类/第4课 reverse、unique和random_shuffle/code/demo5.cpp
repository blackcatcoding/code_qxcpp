#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    vector<int> v({1, 2, 3, 4, 5, 6});

    random_shuffle(v.begin(), v.end());

    for(int x : v)
        cout << x << " ";

    puts("");

    sort(v.begin(), v.end(), greater<int>());

    for(int x : v)
        cout << x << " ";

    puts("");

    sort(v.begin(), v.end(), less<int>());

    for(int x : v)
        cout << x << " ";

    puts("");
	
	return 0;
}

