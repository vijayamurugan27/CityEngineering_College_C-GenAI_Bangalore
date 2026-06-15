#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Book {
public:
    int id;
    std::string title;
    std::string author;

    Book(int i, std::string t, std::string a) : id(i), title(t), author(a) {}

    void saveToFile(std::ofstream &file) const {
        file << id << "," << title << "," << author << "\n";
    }
};

class Library {
private:
    std::vector<Book> books;
    std::string dbFile = "library_data.txt";

    void loadBooks() {
        books.clear();
        std::ifstream file(dbFile);
        if (!file.is_open()) return;

        std::string line;
        while (getline(file, line)) {
            size_t pos1 = line.find(',');
            size_t pos2 = line.find(',', pos1 + 1);
            if (pos1 != std::string::npos && pos2 != std::string::npos) {
                int id = std::stoi(line.substr(0, pos1));
                std::string title = line.substr(pos1 + 1, pos2 - pos1 - 1);
                std::string author = line.substr(pos2 + 1);
                books.push_back(Book(id, title, author));
            }
        }
        file.close();
    }

    void saveBooks() {
        std::ofstream file(dbFile);
        for (const auto &book : books) {
            book.saveToFile(file);
        }
        file.close();
    }

public:
    Library() { loadBooks(); }

    void addBook(int id, std::string title, std::string author) {
        books.push_back(Book(id, title, author));
        saveBooks();
        std::cout << "Book added successfully!" << std::endl;
    }

    void listBooks() {
        if (books.empty()) {
            std::cout << "No books in the library." << std::endl;
            return;
        }
        std::cout << "\n--- Library Catalog ---" << std::endl;
        for (const auto &book : books) {
            std::cout << "ID: " << book.id << " | Title: " << book.title << " | Author: " << book.author << std::endl;
        }
    }

    void updateBook(int id, std::string newTitle, std::string newAuthor) {
        for (auto &book : books) {
            if (book.id == id) {
                book.title = newTitle;
                book.author = newAuthor;
                saveBooks();
                std::cout << "Book updated successfully!" << std::endl;
                return;
            }
        }
        std::cout << "Book ID not found!" << std::endl;
    }

    void deleteBook(int id) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->id == id) {
                books.erase(it);
                saveBooks();
                std::cout << "Book deleted successfully!" << std::endl;
                return;
            }
        }
        std::cout << "Book ID not found!" << std::endl;
    }
};

int main() {
    Library myLibrary;
    
    std::cout << "1. Seeding Library with Books..." << std::endl;
    myLibrary.addBook(101, "The C++ Programming Language", "Bjarne Stroustrup");
    myLibrary.addBook(102, "Clean Code", "Robert C. Martin");
    
    myLibrary.listBooks();

    std::cout << "\n2. Updating Book 102..." << std::endl;
    myLibrary.updateBook(102, "Clean Code (2nd Edition)", "Robert C. Martin");
    myLibrary.listBooks();

    std::cout << "\n3. Deleting Book 101..." << std::endl;
    myLibrary.deleteBook(101);
    myLibrary.listBooks();

    return 0;
}
