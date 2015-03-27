

# ifndef TEXTBOOK_H
# define TEXTBOOK_H
# include "Book.h"

using namespace std;

class TextBook: public Book{
public:
    TextBook(string &, Author &, float, int, string &, int);

    void setSubject(string &);
    string getSubject();

    void setUnits(int );
    int getUnits();

   string toString();

private:
    string subject;
    int units;


};

# endif
