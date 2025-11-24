// Implement a simple Library Management system with classes for Book, Member, and Library.
// OOP Based Interview questions

#include <iostream>
#include<string>
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

class Member{
    int id;
    string name;

public:
    Member (){
        id=0;
        name="";
    }

    void setMember(int memberId, string memberName){
        id=memberId;
        name=memberName;
    }

    int getId(){
        return id;
    }

    void display(){
        cout<<"Member name:"<<name<<"--"<<"Member id:"<<id<<endl;
    }

};

class Library{
    Book books[10];
    Member members[10];
    int bookcount;
    int membercount;

    public:
    Library(){
        bookcount=0;
        membercount=0;
    }

    void addbook(int id,string title){
        if(bookcount<10){
            books[bookcount].setBookData(id,title);
            bookcount++;
        }else{
            cout<<"Library Full";
        }
    }

    void addmemebr(int id,string name){
        if(membercount<10){
            members[membercount].setMember(id,name);
            membercount++;
        }else{
            cout<<"Member count full";
        }
    }

    void displaybooks(){
        for(int i=0;i<bookcount;i++){
            books[i].display();
        }
    }
    
    void displaymember(){
        for(int i=0;i<membercount;i++){
            members[i].display();
        }
    }

};


int main(){
    Library lib;

    lib.addbook(1,"c++ mastery");
    lib.addbook(2,"dsa in cpp");

    lib.addmemebr(1,"vikas");
    lib.addmemebr(2,"raj");
    lib.displaybooks();
    lib.displaymember();
    return 0;
}