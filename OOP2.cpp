#include<iostream>
using namespace std;
 
class Employee
{
    public:
    int employeeid;
    string name;
    string department;
    int salary;
    int designation;

void display()
{
    cout<<"--------Employee Details--------"<<endl;
    cout<<"Employee ID: "<<employeeid<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Designation: "<<designation<<endl;
} 
Employee()
 {
    cout<<"Enter Employee ID: ";
    cin>>employeeid;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Department: ";
    cin>>department;
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter Designation: ";
    cin>>designation;
 }
};
    int main()
    {
        Employee e1;
        e1.display();
        return 0;

    }

