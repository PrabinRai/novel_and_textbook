# include<iostream>
# include "Novel.h"
# include <string>

using namespace std;

Novel::Novel(string &name, Author &author, float price, int quantity, string &publisher, string &award)
:Book(name,author,price,quantity)
{
 setPublisher(publisher);
 setAward(award);
}

void Novel::setPublisher(string PublisherName)
{
    publisher=PublisherName;
}

string Novel::getPublisher()
{
    return publisher;
}

void Novel::setAward(string AwardName)
{
    award= AwardName;
}

string Novel::getAward()
{
    return award;
}

void Novel::toString()
{
 cout << "\n";
    cout << "Book:" << name << endl;
    cout << "Author:" << author.getName()<< endl;
    cout << "His Gender is:" <<author.getGender() << endl;
    cout << "Publisher of the novel:" <<getPublisher()<< endl;
    cout <<"Award received by the novel:" << getAward() << "\n";
}


