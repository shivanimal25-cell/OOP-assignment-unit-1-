#include <iostream>
using namespace std;

class Book {
public:
    static string libraryName;
};

string Book::libraryName = "City Central Library";

int main() {
    cout << Book::libraryName;
}