#include <iostream>
using namespace std;
int main()
{
  int list1[5];
  int list2[15];
  for (int i = 0; i < 5; i++)
    list1[i] = i * i - 2;
  cout << "list1: ";
  for (int i = 0; i < 5; i++)
    cout << list1[i] << " ";
  cout << endl;
  for (int i = 0; i < 5; i++)
    {
      list2[i] = list1[i] * i;
      list2[i + 5] = list1[4 - i] + i;
      list2[i + 10] = list2[9 - i] + list2[i];
    }
  cout << "list2: ";
  for (int i = 0; i < 7; i++)
    cout << list2[i] << " ";
  cout << endl;
  return 0;
}
