#include <iostream>

using namespace std;

int num1;
int num2;
double z;

void defaultParam(int num1, int num2 = 7, double z = 2.5)
{
  int num3;
  num1 = num1 + static_cast<int>(z);
  z = num2 + num1 * z;
  num3 = num2 - num1;
  cout << "num3 = " << num3 << endl;
}

int main()
{
  cout << "enter num1 "; 
  cin >> num1; 
  cout <<  endl;
  //  cout << "enter num2 "; 
  // cin >> num2;
  // cout << endl;
  //  cout << "enter z "; 
  // cin >> z;
  // cout << endl;

  defaultParam(num1, num2, z); 
  return 0;
}


