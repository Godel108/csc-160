/*Dominique Ingoglia
  Program 4
  Chapter 4 Problem #7
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//Calculate the number of containers and boxes per amount of cookies and print the number of left over cookies and boxes.

int main()
{
  //define the variables
  int cookies;
  int container = 75;
  int box = 24;
  int mid_box;
  int fin_box;
  int fin_cookies;
  int fin_container;

  //gather cookie and box data
  cout << "Enter the total number of cookies: ";
  cin >> cookies;
    
  //calculate the cookies, boxes and container quantities
  fin_cookies = cookies % box;
  mid_box = cookies / box;
  fin_container = mid_box/container;
  fin_box = mid_box % container;	

  //Outputs number of boxes and containers needed and leftovers
  cout << "\nThe number of cookie boxes needed to hold the cookies: "
       << mid_box << endl;

  if (fin_cookies != 0)
     cout << "Leftover cookies: "
	  << fin_cookies << endl;
  else
     cout << "No extra cookies.\n" << endl;

  cout << "The number of containers needed to store the cookie boxes: "
       << fin_container << endl;

  if (fin_box != 0)
     cout << "Leftover boxes: "
	  << fin_box << endl;
  else
     cout << "No extra boxes." << endl;


  //Exit program
  system("read -p \"Press enter to continue...\" n l s");
  cout << endl;
  return 0;
}
    
