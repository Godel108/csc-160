#include <iostream>

using namespace std;
int num = 1;
int i;
 
int main()
{ for (i=0; i<5; i++)
    {
      num = num * (5-i);
      cout << num << " ";
    }
  cout << endl;
  return 0;
}
