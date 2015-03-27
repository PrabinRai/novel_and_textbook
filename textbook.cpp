
# include "TextBook.h"

using namespace std;

TextBook::TextBook(string &name,Author &author, float , int, string &subject, int)
:Book(name,author,price,quantity)
{
    setSubject(subject);
    setUnits(units);

}

void TextBook::setSubject(string SubjectName);
{
    subject=SubjectName;

}

string TextBook::getSubject();
{
    return subject;
}

void TextBook::setUnits(int UnitNumber);
{

    units=UnitNumber;
}

int TextBook::getUnits();
{
    return units;
}

void TextBook::toString()
{
cout << "\n";
    cout << "Book:" << name << endl;
    cout << "Price:" << price << endl;
    cout << "Quantity:" << quantity << endl;
    cout << "Author:" <<author.getName() << endl;
    cout << "Name of the Subject:" << getSubject()<< endl;
    cout << "total no. of units:" << getUnits()<< endl;
    cout << "Total Price:" << printTotal()<< endl;

}
