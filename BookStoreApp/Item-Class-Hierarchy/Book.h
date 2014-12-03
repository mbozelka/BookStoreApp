#ifndef BOOK_H
#define BOOK_H

#include "Product.h"

enum genreType { UNKNOWN, SCIENCE_FICTION, MYSTERY, HORROR, ROMANCE };

class Book : public Product
{
protected:
   int ISBN;
   string author;
   string title;
   genreType genre;
   string publisher;

public:
   Book() : Product(), ISBN(0), author(""), title(""), genre(UNKNOWN), publisher("") {}
   Book(string Name, int Quantity, double Price, int ISBN, string author, string title, genreType genre, string publisher) :
      Product(Name, Quantity, Price), ISBN(ISBN), author(author), title(title), genre(genre), publisher(publisher) {}

   virtual ~Book() {}

   int getISBN();
   string getAuthor();
   string getTitle();
   genreType getGenre();
   string getPublisher();

   bool setISBN(int ISBN);
   bool setAuthor(string author);
   bool setTitle(string title);
   bool setGenre(genreType genre);
   bool setPublisher(string publisher);

   static const string getTextForGenre(genreType genre);
   virtual const void DisplayItem();
};

#endif
