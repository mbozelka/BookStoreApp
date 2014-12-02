#include "AudioBook.h"


bool AudioBook::setAudioFormat(audioFileFormat fileFormat)
{
   this->fileFormat = fileFormat;
   return true;
}

const void AudioBook::DisplayItem()
{
   Book::DisplayItem();
}

ostream& operator<<(ostream& os, const AudioBook& ep){
   os << ep.Name << ";" << ep.Quantity << ";" << ep.Price << ";" << ep.ISBN << ";" << ep.author << ";" <<
      ep.title << ";" << ep.genre << ";" << ep.publisher << ";" << ep.fileFormat << endl;
   return os;
}

const bool AudioBook::operator== (const AudioBook & audioBookRef)
{
   return (this->Name == audioBookRef.Name
      && this->Quantity == audioBookRef.Quantity
      && this->Price == audioBookRef.Price
      && this->ISBN == audioBookRef.ISBN
      && this->author == audioBookRef.author
      && this->title == audioBookRef.title
      && this->genre == audioBookRef.genre
      && this->publisher == audioBookRef.publisher
      && this->fileFormat == audioBookRef.fileFormat);
}

const bool AudioBook::operator!= (const AudioBook & audioBookRef)
{
   return !operator==(audioBookRef);
}