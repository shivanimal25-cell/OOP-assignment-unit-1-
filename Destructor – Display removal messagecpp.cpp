#include <iostream>
using namespace std;

class Book {
public:
    ~Book() {
        cout << "Book removed from library";
    }
};

int main() {
    Book b1;
}