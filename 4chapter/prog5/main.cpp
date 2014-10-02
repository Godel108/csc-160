#include <iostream>
#include <cstdlib>

using namespace std;

//Calculate the number of containers and boxes per amount of cookies and print the number of left over cookies.

int main()
{
  //define the variables
  int cookies;
  int container;
  int box;
  int fin_box;
  int fin_cookies;
  int fin_container;

  //gather the required data
  cout << "Enter the total number of cookies: ";
  cin >> cookies;
  cout << "\nThe number of cookie boxes needed to hold the cookies: ";
  cin >> box;
    
  //calculate the cookies per box and leftover cookies
  fin_cookies = cookies % box;

  //Outputs number of remaining cookies
  if (fin_cookies != 0)
     cout << "Leftover cookies: "
	  << fin_cookies << endl;
  else
     cout << "No extra cookies." << endl;

  //gather information on containers
  cout << "The number of containers needed to store the cookie boxes: ";
  cin >> container;

  //calculate the number of leftover boxes
  fin_box = (cookies / box) % container;	

  //output the number of leftover boxes
  cout << "Leftover boxes: " << fin_box
       << endl;

  cout << "Press enter to continue...";
  system("pause");
  return 0;
}
    
