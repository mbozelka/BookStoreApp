#include "PaperBook.h"

bool PaperBook::setNumberOfPages(int pageCount)
{
   this->pageCount  = pageCount;
   return true;
}

const void PaperBook::DisplayItem()
{
   Book::DisplayItem();
}

ostream& operator<<(ostream& os, const PaperBook& ep){
   os << ep.Name << ";" << ep.Quantity << ";" << ep.Price << ";" << ep.ISBN << ";" << ep.author << ";" <<
      ep.title << ";" << ep.genre << ";" << ep.publisher << ";" << ep.pageCount << ";" << endl;

   return os;
}

const bool PaperBook::operator== (const PaperBook & paperBookRef)
{
   return (this->Name == paperBookRef.Name
      && this->Quantity == paperBookRef.Quantity
      && this->Price == paperBookRef.Price
      && this->ISBN == paperBookRef.ISBN
      && this->author == paperBookRef.author
      && this->title == paperBookRef.title
      && this->genre == paperBookRef.genre
      && this->publisher == paperBookRef.publisher
      && this->pageCount == paperBookRef.pageCount);
}

const bool PaperBook::operator!= (const PaperBook & paperBookRef)
{
   return !operator==(paperBookRef);
}