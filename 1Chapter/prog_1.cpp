//Dominique Ingoglia
//09/05/14
//Programming assignment 1
//Chapter 2, Problem #3


//include statement (s)
#include <iostream>

//using namespace statement
using namespace std;

//outputs the desired information and prompts the user to press a key to exit the program.
int main()
{
//variable declaration
  int num1;
  int num2;
  int num3;
  int average;
//assign value to variables
 num1 = 125;
 num2 = 28;
 num3 = -25;
 average= (num1+num2+num3)/3;

//executable statements
 cout << "num1= " << num1 << endl
      << "num2= " << num2 << endl
      << "num3= " << num3 << endl
      << "average= " << average << endl	
      << "Press any key to continue . . .";
   cin.get(); 

//return statement
 return 0;
}
