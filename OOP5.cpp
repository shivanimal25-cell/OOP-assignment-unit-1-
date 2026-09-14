#include<iostream>
using namespace std;

class Book
{
    public:
    string title;
    string author;
    int year;
    float price;

    void input()
    {
        cout<<"Enter book title: "<<endl;
        cin>>title;
        cout<<"Enter book author: "<<endl;
        cin>>author;
        cout<<"Enter publication year: "<<endl;
        cin>>year;
        cout<<"Enter book price: "<<endl;
        cin>>price;
    }
    void display()
    {
        cout<<"Book Title: "<<title<<endl;
        cout<<"Book Author: "<<author<<endl;
        cout<<"Publication Year: "<<year<<endl;
        cout<<"Book Price: "<<price<<endl;
    }
};

int main()
{
    Book b1;
    b1.input();
    b1.display();
    return 0;
}

Output:
Enter book title: 
"Avengers Endgamr"
Enter book author: 
Enter publication year: 
2022
Enter book price: 
2000
Book Title: "Avengers
Book Author: Endgamr"
Publication Year: 2022
Book Price: 2000
