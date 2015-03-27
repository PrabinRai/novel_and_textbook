
#ifndef NOVEL_H
#define NOVEL_H

# include "Book.h"

using namespace std;

class Novel: public Book{
public:
  Novel(string &, Author &,float, int, string &, string &);

  void setPublisher(string);
  string getPublisher();

  void setAward(string);
  string getAward();

   void toString();
private:
    string publisher;
    string award;
};

# endif
