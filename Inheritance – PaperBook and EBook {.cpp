class Book {
public:
    string title;
    int id;
};

class PaperBook : public Book {
public:
    int pageCount;
};

class EBook : public Book {
public:
    float fileSize;
};