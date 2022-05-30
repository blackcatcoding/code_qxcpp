#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Person{
private:
    string name;
    int age;

public:
    Person(){
        this->name = "cat";
        this->age = 28;
        cout << this << endl;
    }

    Person(string name, int age){
        this->name = name;
        this->age = age;
        cout << this << endl;
    }


    Person(const Person& person){
        this->name = person.name;
        this->age = person.age;
    }

    void print() const {
        // this->name = "xxx";
        cout << this->name << " " << this->age << endl;
    }
};

int main() {

    Person cat = Person();
    printf("%p\n", &cat);
    cat.print();

    Person cat2 = Person("cat2", 20);
    printf("%p\n", &cat2);
    cat2.print();

	
	return 0;
}

