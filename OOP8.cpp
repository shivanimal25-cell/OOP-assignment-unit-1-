#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void showPerson() {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person {
public:
    int empID;

    void showEmployee() {
        showPerson();
        cout << "Employee ID: " << empID << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    void showManager() {
        showEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.name = "Rahul";
    m.empID = 101;
    m.department = "IT";

    m.showManager();
    return 0;
}