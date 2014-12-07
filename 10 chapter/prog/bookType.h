#include <string>

class bookType
{
 private:
   std::string title, ISBN, Publisher, auth[3];
   int PublishYear, copies, authorCount;
   double cost;

  public:
  void setBookInfo(std::string title, std::string ISBN, std::string Publisher, int PublishYear, std::string auth[3], double cost, int copies, int authorCount);
  //This function takes in information from the program and assigns it to the class
  //Postcondition: Updates the information about the book.

  void printbookTitle();
  //Prints the book title
  //Post condition: The terminal displays the title

  void printbookTitleAndISBN();
  //Prints the book title and ISBN
  //Post condition: The terminal displays the title and ISBN  

  bool isTitle(std::string title);
  //Sees if the book title exists in the database
  //Post condition: Displays the existance or non-existance of the title

  bool isISBN(std::string ISBN);
  //Sees if the book ISBN exists in the database
  //Post condition: Displays the existance or non-existance of the ISBN

  int updateQuantity(int count);
  //Changes the quantity of the book
  //Post condition: the quantity of the books is updated.

  void printInfo();
  //Prints the information about the book
  //Post Contition: the information is displayed in the terminal

};

