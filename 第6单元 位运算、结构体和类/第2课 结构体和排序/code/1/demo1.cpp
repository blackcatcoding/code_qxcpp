#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
    char gender;
    bool is_leader;
};


int main() {

    Student xiaoming = {"小明", 10, 300, 'm', true};

    printf("%s %d %d %c %d\n", xiaoming.name.c_str(), xiaoming.age, xiaoming.score, xiaoming.gender, xiaoming.is_leader);
	
    printf("%p %p %p %p %p\n", xiaoming.name.c_str(), &xiaoming.age, &xiaoming.score, &xiaoming.gender, &xiaoming.is_leader);

	return 0;
}

