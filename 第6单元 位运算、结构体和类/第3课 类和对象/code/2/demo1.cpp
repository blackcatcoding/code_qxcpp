#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Person{
private:
    string m_name;
    int m_age;

public:
    Person(){
        m_name = "cat";
        m_age = 28;
    }

    /*
    Person(string name, int age){
        m_name = name;
        m_age = age;
    }
    */

    Person(string name, int age) : m_name(name), m_age(age){}

    Person(const Person& person){
        m_name = person.m_name;
        m_age = person.m_age;
    }

    void print(){
        cout << m_name << " " << m_age << endl;
    }
};

int main() {

    Person blackcat = Person("blackcat", 28);
    blackcat.print();

    Person blackcat2 = Person(blackcat);
    blackcat2.print();
	
	return 0;
}

