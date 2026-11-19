class Book {
public:
    string title;
    int id;

    Book(string t, int i) {
        title = t;
        id = i;
    }
};

int main() {
    Book b1("C++", 101);

    cout << b1.title << " " << b1.id;
}