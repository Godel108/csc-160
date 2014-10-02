/*Dominique Ingoglia
Program 3 
Chapter 3 Problem #5*/


#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

//Calculate the total ticket amount and sales after each game

int main()
{
  //define the variables
  ifstream inFile;
  ofstream outData;
  float box;
  float sideline;
  float premium;
  float general;  

  cout << "Processing Data\n";

  //Open the Data and Out files
  inFile.open ("Ch3_Ex5Data.txt");
  outData.open ("Ch3_Ex5Out.txt");
  
  //Gather information from the Data file
  inFile.ignore(4, ' ') >> box;
  inFile.ignore(5, ' ') >> sideline;    
  inFile.ignore(4, ' ') >> premium;
  inFile.ignore(4, ' ') >> general;

  //Generate the totals of the sold tickets and sale amount.  
  outData << "Number of tickets sold = " 
          << box + sideline + premium + general 
          << "\n" << endl;

  //Make sure the output of the sale amount is a dollar amount 
  outData << fixed << showpoint;
  outData << setprecision(2);

  outData << "Sale amount = $" 
          << box*250 + sideline*100 + premium*50 + general*25 
          << endl; 

  //Close the files  
  inFile.close();
  outData.close();

  cout << "Complete! Press enter to continue...";
  cin.get();
  return 0;
}
