/* Write a program that accepts as input the mass, in grams, and density, in grams per cubic centimeters, and outputs the volume of the object using the formula: volume = mass / density.  Format your output to two decimal places */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double mass;
  double density;
  double volume;
  //Gather the mass and density data
  cout << "Input the mass in grams:";

  cin >> mass;

  cout << "Input the density in grams per cubic centimeter:";

  cin >> density;

  //compute the volume
  volume = mass / density;

  //set the output to two decimals and display to the user
  cout << fixed << showpoint << setprecision(2);
  cout << "The volume of the object is: " << volume << " cubic centimeters" << endl; 

  return 0;
}
