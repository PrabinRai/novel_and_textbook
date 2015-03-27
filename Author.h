
# include<string>

using namespace std;

# ifndef AUTHOR_H
# define AUTHOR_H

class Author
{
private:
    string name;
    string email;
    char gender;

public:
    Author(string, string, char);
    Author();
    void setEmail(string );
    string getEmail();
    string getName();
    char getGender();

    //void displayInfo();
    string toString();

};
# endif
