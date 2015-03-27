
# include "Author.h"

using namespace std;

Author::Author(string AuthorName, string AuthorEmail, char AuthorGender)
{
   name= AuthorName;
   email= AuthorEmail;
   gender= AuthorGender;
}

Author::Author()
{
    //kjsfkjsdkfljas
}

void Author::setEmail(string AuthorEmail)
{
  email= AuthorEmail;
}

string Author::getEmail()
{
   return email;
}

string Author::getName()
{
   return name;
}

char Author::getGender()
{
   return gender;
}


string Author::toString()
{
    return name+ " at "+ getEmail();
}
