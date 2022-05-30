#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	
    vector<int> v;
    cout << v.empty() << " " << v.size() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout << v.empty() << " " << v.size() << endl;

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    puts("");

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";

    puts("");

    v.push_back(7);

    for(auto it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";

    v.erase(v.begin() + 2);
    puts("");

    for(auto x : v)
        cout << x << " ";

    v.erase(v.begin() + 1, v.begin() + 4);
    puts("");

    for(auto x : v)
        cout << x << " ";

	return 0;
}

