// This file contains definitions of the functions for the class

#include <iostream>
#include "bookType.h"
#include <string>

using namespace std;

void bookType::setBookInfo(string title, string ISBN, string Publisher, int PublishYear, string auth[3], double cost, int copies, int authorCount){
  bookType::title = title;
  bookType::ISBN = ISBN;
  bookType::Publisher = Publisher;
  bookType::PublishYear = PublishYear;
  bookType::cost = cost;
  bookType::copies = copies;
  bookType::authorCount = authorCount;
}

void bookType::printbookTitle(){
  cout << bookType::title << endl;
 }

void bookType::printbookTitleAndISBN()
{
  cout << bookType::title << endl
       << bookType::ISBN << endl;
}

bool bookType::isTitle(string title) {
  bookType::title == title;
}

bool bookType::isISBN(string ISBN){
  bookType::ISBN == ISBN;
 }

int bookType::updateQuantity(int count){
  bookType::copies = bookType::copies + count;
 }

void bookType::printInfo(){
  cout << "Title: " << bookType::title << endl
       << "ISBN: " << bookType::ISBN << endl
       << "Publisher: " << bookType::Publisher << endl
       << "Year Published: " << bookType::PublishYear << endl
       << "copies: " << bookType::copies << endl
       << "authors: " << bookType::auth[1] << ", " << bookType::auth[2] << ", " << bookType::auth[3] << endl; 
 }




 
