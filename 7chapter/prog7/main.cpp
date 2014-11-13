/*
Dominique Ingoglia
Computer Science 160
Chapter 7 
Exercise #8
*/ 

//include libraries
#include <iostream>
#include <string>
#include <cstdlib>

//define namespaces
using namespace std;

namespace user
{
  string fname, lname, SSN, userid, pass;
  string RSSN = "xxx-xxx-xxxx";

}

using namespace user;

int main()
{
  //get information from the user
  cout << "Enter a student's name, social security number, user id, and password in one line:" << endl;
  
  cin >> fname >> lname >> SSN >> userid >> pass;
  cout << endl;
  //replace the SSN and password with multipule 'x'.
  SSN.replace(0,12,RSSN);
  pass.replace(0,80,"xxxxxxxx");
  //output the results
  cout << fname << " " << lname << " " << SSN << " " << userid << " " << pass << endl;

  //exit the program                                                 
  system("read -p \"Press enter to continue...\" n l s");
  cout << endl;

  return 0;
}
