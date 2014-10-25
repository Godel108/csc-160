#include <iostream>
#include <iomanip>
using namespace std;

int i,j;

int main() 
{
  for (i= 1; i <= 9; i++)
    {
      for (j=1; j <= (9-i); j++)
	cout << " ";
      for (j = 1; j <= i; j++) 
	cout << setw(1) << j;
      for (j = (i-1);  j >= 1; j--)
	cout << setw(1) << j;
      cout << endl;
    }
  return 0;
}
