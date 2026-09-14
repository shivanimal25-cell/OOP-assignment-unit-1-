#include<iostream>
using namespace std;
class Book
{
    private:
    string title;
    string author;
    float price;

    public:
    Book()
    {title = " Rich dad Poor dad ";
    author = "Robert Kiyosaki";
    price = 19.99;
    }

    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: $"<<price<<endl;
    }
};

int main()
{
    Book B1;
    Book B2("Harry Potter", "J.K. Rowling", 500);
    cout<<"------Book 1 Details------"<<endl;
    B1.display();
    cout<<"\n------Book 2 Details------"<<endl;
    B2.display();

    return 0;
}

Output:
------Book 1 Details------
Title:  Rich dad Poor dad 
Author: Robert Kiyosaki
Price: $19.99

------Book 2 Details------
Title: Harry Potter
Author: J.K. Rowling
Price: $500
