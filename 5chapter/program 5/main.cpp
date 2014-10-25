/*
Dominique Ingoglia
Program 5
Exercise #9
*/

//include needed libraries and namespaces
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
  //declare variables
  int firstNum;
  int secondNum;
  int counter;
  int sum=0;
  int sos=0;
  char ch;

  //gather variable assignments
  cout << "Input two integers where the first must be less than the second:" << endl;
  cout << "First number: ";
  cin >> firstNum;
  cout << "Second number: ";
  cin >> secondNum;

  //A loop for output of the odd integers between the two chosen numbers
  counter = firstNum;

  cout << "Odd integers between " << firstNum << " and " << secondNum << " are:" << endl;

  while (counter <= secondNum)
    {
    if (counter % 2 != 0)
      cout << counter << " ";	 		       
      counter = counter + 1;		       
    }
  cout << endl;

  //output the sum of even integers between the two numbers
  counter = firstNum;
  while (counter <= secondNum)
    {
    if (counter % 2 == 0)
      sum = sum + counter;
      counter = counter + 1;
    }
  cout << "The sum of even integers between " << firstNum << " and " << secondNum << " = " << sum << endl;

  //output numbers 1-10 and the squares of those outputs
  counter = 1;
  cout << "Number    Square of Number" << endl;
  while (counter <= 10)      
      {cout << setw(4) << counter << setw(18) << counter * counter << endl;
	counter = counter + 1;   
      }
  cout << endl;

  //output the squares of the odd integers between the two numbers
  cout << "Sum of the squares of odd integers between " << firstNum << " and " << secondNum << " = ";
  counter = firstNum;
  while (counter <= secondNum)
    { if (counter % 2 != 0)
        sos = sos + (counter * counter);
        counter = counter + 1;
    }
  cout << sos << endl;
  
  //Output the upper case alphabet  
  cout << "Upper case letters are: ";
  for ( ch ='A' ; ch <= 'Z' ; ch++)
      {cout << ch << " ";
      };
  cout << endl;

  //Exit program                                                                                   
  system("read -p \"Press enter to continue...\" n l s");
  cout << endl;

  return 0;
}
