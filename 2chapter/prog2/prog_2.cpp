//Dominique Ingoglia
//09/12/14
//Programming assignment 2
//Chapter 2, Problem #11

#include <iostream>
#include <math.h>
using namespace std;
// This code will take in five decimals, print them out, round them and perform sum and average operations on them.
int main()
{
//Declare variables
 double dec1;
 double dec2;
 double dec3;
 double dec4;
 double dec5;
 int sum;
 double average;
 //Recieve user input
  cout << "Please enter five decimals: \n" << "Decimal 1:";
  cin  >> dec1;
  cout << "Decimal 2:";
  cin  >> dec2;
  cout << "Decimal 3:";
  cin  >> dec3;
  cout << "Decimal 4:";
  cin  >> dec4;
  cout << "Decimal 5:";
  cin  >> dec5;
  cout << "Your five decimal numbers are: " << dec1 << ", "
       << dec2 << ", " << dec3 << ", " << dec4 << ", " << dec5 << "\n";
  //Round the five decimals to integers and sum 
  sum = round(dec1) + round(dec2) + round(dec3) + round(dec4) + round(dec5);
  //Take the average of the sum
  average = sum / 5;
  //Display the results    
  cout << "The sum of these decimals rounded to the nearest integer is " << sum << endl;
 
  cout << "The average of these decimals rounded to the nearest integer is " << average << endl;    

 return 0;
}

