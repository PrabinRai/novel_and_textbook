
# include "Author.h"

using namespace std;

#ifndef BOOK_H
#define BOOK_H

class Book
{
protected:
    string name;
    Author author;
    float price;
    int quantity;

public:
    Book(string,Author,float);
    Book(string,Author,float,int);

    void setPrice(float);
    int getPrice();

    void setQuantity(int);
    int getQuantity();

    string getName();
    Author getAuthor();

    string toString();
};
#endif
