#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{

  ifstream inFile;
  int acctNumber;
  int x;
  int y;
  double z;
  char ch;
  string accountType;
  double balance;

  inFile.open ("stream.dat");
  inFile >> x >> y 
	 >> ch >> z;
  inFile.close();
  cout << "x=" << x << "y=" << y << "ch=" << ch << "z=" << z << endl; 


  return 0;
}
