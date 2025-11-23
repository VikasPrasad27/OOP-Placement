// Implement a simple Library Management system with classes for Book, Member, and Library.
// OOP Based Interview questions

#include <iostream>
using namespace std;

class Book {
    int id;
    string title;
    bool isIssued;

public:
    Book() {
        id = 0;
        title = "";
        isIssued = false;
    }

    void setBookData(int bookId, string bookTitle) {
        id = bookId;
        title = bookTitle;
        isIssued = false;
    }

    int getId() {
        return id;
    }

    bool getIsIssued() {
        return isIssued;
    }

    void issue() {
        isIssued = true;
    }

    void giveBack() {
        isIssued = false;
    }

    void display() {
        cout << "Book ID: " << id << ", Title: " << title 
             << ", Issued: " << (isIssued ? "Yes" : "No") << endl;
    }
};

int main(){
    return 0;
}