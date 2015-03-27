/*
Name: Prabin rai
program: Program that creates Objects of both Book and Author classes
and make use of all members function and Interactive as possible
Date: 2015/3/27
*/

#include <iostream>
# include "Book.h"
# include "Novel.h"
# include "TextBook.h"
//# include<string>

using namespace std;

int main()
{

   string authorName,authorEmail;
   char authorGender;
   int bookPrice,bookQuantity,UnitNumber;
   string bookName,PublisherName,AwardName,SubjectName;

   cout<<"Author name:";
   getline(cin,authorName);

   cout<<"Author's Email:";
   getline(cin,authorEmail);

   cout<<"Author's gender (M/F):";
   cin>>authorGender;
   cin.get();

   cout<<"Name of the book written by the writer:\t";
   getline(cin,bookName);

   cout<<"Name of the Publisher:\t";
   getline(cin,PublisherName);
   cin.get();

   cout<<"Name of the award won by:\t";
   getline(cin,AwardName);

   cout<<"Book of subject:\t";
   getline(cin,SubjectName);

   cout<<"total no. of units in the book:\t";
   cin>>UnitNumber;

   cout<<"Print the price of the book:\t";
   cin>>bookPrice;

   cout<<"Print the available quantity of the book:";
   cin>>bookQuantity;

   Author newAuthor(authorName,authorEmail,authorGender);
   Book newBook(bookName,newAuthor,bookPrice,bookQuantity);

    cout<<newBook.toString();

   Novel newNovel(bookName,newAuthor,bookPrice,bookQuantity,PublisherName,AwardName);
   newNovel.toString();

   TextBook newTextBook(bookName,newAuthor,bookPrice,bookQuantity,SubjectName,UnitNumber);
   newTextBook.toString();

}
