#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age;
    string course;

    public:
    Student(string name, int age, string course)
    {
        this->name = name;
        this->age = age;
        this->course = course;
    }
    void display()
    {
        cout<<"\n------Student Detalis------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Course: "<<course<<endl;
    }
};

int main()
{
    Student s1("Shivani", 18, "Machine learning");
    s1.display();
    return 0;
}