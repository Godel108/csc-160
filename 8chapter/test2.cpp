#include <iostream>
using namespace std;
int main()
{
  int j;
  int one[5];
  int two[10];
  for (j = 0; j < 5; j++)
    one[j] = 5 * j + 3;
  cout << "One contains: ";
  for (j = 0; j < 5; j++)
    cout << one[j] << " ";
  cout << endl;
  for (j = 0; j < 5; j++)
    {
      two[j] = 2 * one[j] - 1;
      two[j + 5] = one[4 - j] + two[j];
    }
  cout << "Two contains: ";
  for (j = 0; j < 10; j++)
    cout << two[j] << " ";
  cout << endl;
  return 0;
}
