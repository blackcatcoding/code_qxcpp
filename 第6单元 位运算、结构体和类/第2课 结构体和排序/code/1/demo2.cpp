#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

const int N = 110;

struct Student{
    string name;
    int age;
    int score;
    // char gender;
    // bool is_leader;
}students[N];

bool cmp(Student& a, Student& b){
    // return a.age < b.age;
    if(a.score == b.score)
        return a.age < b.age;
    return a.score > b.score;
}

int main() {
    
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> students[i].name >> students[i].age >> students[i].score;

    sort(students + 1, students + n + 1, cmp);

    for(int i = 1; i <= n; i++)
        cout << students[i].name << " ";

	return 0;
}

