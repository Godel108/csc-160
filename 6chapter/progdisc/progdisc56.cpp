/*
Dominique Ingoglia
Chapter 5, problem #7
Programming discussion

Write a program that prompts the user to input a positive integer. It should then output a message indicating whether the number is a prime number(Note: An even number is prime if it is 2. An odd integer is prime if it is not divisible by any odd integer less than or equal to the square root ofthe number.)
*/

//include libraries used in code
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
  //set variables
  int num;
  int sqrtnum; 

  //Collect a positive integer 'num' from the user
  cout << "Enter a positive integer: ";
    cin >> num; 

    //For the even number cases
    if (num == 2)
      {
	cout << "This is a prime number." << endl;
      }
    else if (num % 2 == 0)
      {
	cout << "All even positive integers except 2 are not prime." << endl;
      }

    //for the odd number cases
    else if (num % 2 != 0)
      {	    
      sqrtnum = sqrt(num);

      // a while loop that will iterate through every odd integer that is between 1 and the square root of 'num'
      while (sqrtnum > 1)
	 {           
	   // checks to make sure the divisor of 'num' is odd.  subtracts 1 from the divisor if it isn't
         if (sqrtnum % 2 == 0)
	    {	     
            sqrtnum = sqrtnum - 1;
	    }           
         // if the divisor is not 1 and it divides 'num', output that it is not a prime number and exits the program 
         else if ((sqrtnum != 1) && (num % sqrtnum == 0))
	    {
	    cout << "Since this integer is divisible by " 
		 << sqrtnum << ", it is not a prime number." << endl;
            return 0;
	    }             
         // subtracts 2 from the divisor for the next iteration of the loop   
         else if (num % sqrtnum != 0)
	    {
	      sqrtnum = sqrtnum - 2;
	    }
         }
      // outputs primality if the while loop does not catch a divisor of 'num'
      cout << "This number is prime." << endl; 
      }

    //exits the program
    system("read -p \"Press enter to continue...\" n l s");
    cout << endl;


  return 0;
      }
