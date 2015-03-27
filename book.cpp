//# include <string>
# include "Book.h"

using namespace std;

Book::Book(string BookName,Author authorName,float BookPrice)
{
  name= BookName;
  author= authorName;
  price= BookPrice;
  //setPrice(BookPrice);
}

Book::Book(string BookName, Author authorName, float BookPrice, int BookQuantity)
{
    name=BookName;
    author=authorName;
    price= BookPrice;
  //  setPrice(BookPrice);
    quantity= BookQuantity;
    //setQuantity(BookQuantity);
}

void Book::setPrice(float BookPrice)
{
  price=BookPrice;
}

int Book::getPrice()
{
    return price;
}

void Book::setQuantity(int BookQuantity)
{
    quantity= BookQuantity;
}

int Book::getQuantity()
{
    return quantity;
}

string Book::getName()
{
    return name;
}

Author Book::getAuthor()
{
    return author;
}

string Book::toString()
{
    return getName()+ " at " +author.toString();
}
