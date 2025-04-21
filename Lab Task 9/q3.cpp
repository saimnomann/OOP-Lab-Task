#include<iostream>
#include "Book.h"

int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
    cout << "Book Details:" << endl;
    book1.displayDetails();

    return 0;
}
