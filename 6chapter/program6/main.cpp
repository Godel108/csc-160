/*
Dominique Ingoglia
Chapter 6 
Problem # 13
CSC 160
 */

//include needed libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

//predeclare functions
void input(double V, double T, double windchill);
void calculate(double V, double T, double windchill);
void print(double V, double T, double windchill);

int main()
{
  //set variables
  double V;
  double T;
  double windchill;
  
  //call functions
  input(V,T,windchill);

  //exit the program
  system("read -p \"Press enter to continue...\" n l s");
  cout << endl;

  return 0;
} 

//this function gathers the wind speed and tempurature variables from the user and calls the calculate function
void input(double V, double T, double windchill)
{
  cout << "Enter wind speed in miles per hour: ";
  cin >>  V;
  cout << endl; 
  cout << "Enter temperature in degrees Fahrenheit: ";
  cin >> T;
  cout << endl;
  calculate(V,T,windchill);
}
//this function calculates the windchill and calls the print function
void calculate(double V, double T, double windchill)
{
  windchill = (35.74 + 0.6215 * T-35.75 * pow(V,0.16) + 0.4275 * T * pow(V,0.16));
  
  print(V,T,windchill);
}

  //output the results
void print(double V, double T, double windchill)
{
  cout << fixed << showpoint;
  cout << setprecision(2);
  cout << "Current temperature: " << T << "F" << endl;
  cout << "Windchill factor: " << windchill << "F" << endl;
}
