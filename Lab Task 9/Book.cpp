#include<iostream>
#include"Book.h"
using namespace std;

Book::Book(string t,string a,string i){
	title=t;
	author=a;
	ISBN=i;
}
string Book::getTitle(){
    return title;
}
string Book::getAuthor(){
    return author;
}
string Book::getISBN(){
    return ISBN;
}
void Book::displayDetails(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
}