#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}
    void displayInfo() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
    Book book("1984", "George Orwell", 1949);
    book.displayInfo();

    return 0;
}
