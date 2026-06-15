#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

// =====================================
// Book Class
// =====================================

class Book
{
public:
    int id;
    string title;
    string author;

    Book() {}

    Book(int i, string t, string a)
    {
        id = i;
        title = t;
        author = a;
    }
};

// =====================================
// Library Class
// =====================================

class Library
{
private:
    vector<Book> books;

public:

    // ==========================
    // Load Books From File
    // ==========================

    void loadBooks()
    {
        books.clear();

        ifstream file("books.txt");

        string line;

        while(getline(file, line))
        {
            stringstream ss(line);

            string idStr, title, author;

            getline(ss, idStr, ',');
            getline(ss, title, ',');
            getline(ss, author, ',');

            int id = stoi(idStr);

            books.push_back(Book(id, title, author));
        }

        file.close();
    }

    // ==========================
    // Save Books To File
    // ==========================

    void saveBooks()
    {
        ofstream file("books.txt");

        for(Book b : books)
        {
            file << b.id << ","
                 << b.title << ","
                 << b.author << endl;
        }

        file.close();
    }

    // ==========================
    // Add Book
    // ==========================

    void addBook()
    {
        int id;
        string title;
        string author;

        cout << "\nEnter Book ID : ";
        cin >> id;

        cin.ignore();

        cout << "Enter Book Title : ";
        getline(cin, title);

        cout << "Enter Author Name : ";
        getline(cin, author);

        books.push_back(Book(id, title, author));

        saveBooks();

        cout << "\nBook Added Successfully.\n";
    }

    // ==========================
    // View Books
    // ==========================

    void viewBooks()
    {
        if(books.empty())
        {
            cout << "\nNo Books Found.\n";
            return;
        }

        cout << "\n--------------------------------------\n";
        cout << "ID\tTITLE\t\tAUTHOR\n";
        cout << "--------------------------------------\n";

        for(Book b : books)
        {
            cout << b.id
                 << "\t"
                 << b.title
                 << "\t\t"
                 << b.author
                 << endl;
        }
    }

    // ==========================
    // Update Book
    // ==========================

    void updateBook()
    {
        int searchId;

        cout << "\nEnter Book ID To Update : ";
        cin >> searchId;

        cin.ignore();

        bool found = false;

        for(auto &b : books)
        {
            if(b.id == searchId)
            {
                cout << "Enter New Title : ";
                getline(cin, b.title);

                cout << "Enter New Author : ";
                getline(cin, b.author);

                found = true;

                saveBooks();

                cout << "\nBook Updated Successfully.\n";

                break;
            }
        }

        if(!found)
        {
            cout << "\nBook Not Found.\n";
        }
    }

    // ==========================
    // Delete Book
    // ==========================

    void deleteBook()
    {
        int searchId;

        cout << "\nEnter Book ID To Delete : ";
        cin >> searchId;

        bool found = false;

        for(auto it = books.begin();
            it != books.end();
            it++)
        {
            if(it->id == searchId)
            {
                books.erase(it);

                found = true;

                saveBooks();

                cout << "\nBook Deleted Successfully.\n";

                break;
            }
        }

        if(!found)
        {
            cout << "\nBook Not Found.\n";
        }
    }
};

// =====================================
// Main Function
// =====================================

int main()
{
    Library lib;

    lib.loadBooks();

    int choice;

    do
    {
        cout << "\n====================================";
        cout << "\n LIBRARY MANAGEMENT SYSTEM";
        cout << "\n====================================";

        cout << "\n1. Add Book";
        cout << "\n2. View Books";
        cout << "\n3. Update Book";
        cout << "\n4. Delete Book";
        cout << "\n5. Exit";

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                lib.addBook();
                break;

            case 2:
                lib.viewBooks();
                break;

            case 3:
                lib.updateBook();
                break;

            case 4:
                lib.deleteBook();
                break;

            case 5:
                cout << "\nThank You...\n";
                break;

            default:
                cout << "\nInvalid Choice.\n";
        }

    } while(choice != 5);

    return 0;
}