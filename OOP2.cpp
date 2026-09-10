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



Output:
 g++ OOP2.cpp -o OOP2      
PS R:\S Coding> .\OOP2              
Enter Employee ID: 108
Enter Name: wanda
Enter Department: Magic
Enter Salary: 5000000.99
Enter Designation: 9
 ---------Employee Details--------
Employee ID: 108
Name: wanda
Department: Magic
Salary: 5000000
Designation: 0
PS R:\S Coding> g++ OOP2.cpp -o OOP2                                                                                                                                          
PS R:\S Coding> .\OOP2
Enter Employee ID: 123
Enter Name: T'chelle
Enter Department: Fighting
Enter Salary: 90000000
Enter Designation: 1
--------Employee Details--------
Employee ID: 123
Name: T'chelle
Department: Fighting
Salary: 90000000
Designation: 1
PS R:\S Coding> 

