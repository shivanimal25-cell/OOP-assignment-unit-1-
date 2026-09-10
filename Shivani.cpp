#include<iostream>
using namespace std;

class Book
{
    public:
    int bookid;
    string title;
    string author;
    int price;
    int quantity;
    
    void display()
    {
        cout<<"-------Book Details-------"<<endl;
        cout<<"BookId: "<<bookid<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;

    }
    Book()
    {
        bookid=945;
        title="C++ programming";
        author="Bjarne Stroustrup";
        price=500;
        quantity=10;
    }
};
    int main()
    {
        Book b1;
        b1.display();
        return 0;
    } 



    