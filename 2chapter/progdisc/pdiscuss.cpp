#include <iostream>

using namespace std;

  int main()
  {

  int quarters;
  int dimes;
  int nickels;


   cout << "Enter the number of quarters: ";
   cin >> quarters;
   cout << "Enter the number of dimes: ";
   cin >> dimes;
   cout << "Enter the number of nickels: ";
   cin >> nickels;
   cout << "The value of this quantity in pennies is: ";
   cout << quarters * 25 + dimes * 10 + nickels * 5 << endl;
    
   return 0;
  }
