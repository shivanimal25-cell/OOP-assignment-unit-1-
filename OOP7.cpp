#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;
    string branch;

    void show() {
        display();
        cout << "Roll No: " << rollNo << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    Student s;
    s.name = "Rahul";
    s.age = 20;
    s.rollNo = 101;
    s.branch = "CSE";

    s.show();
    return 0;
}