#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int mystery(int x, double y, char ch)
{
  if ( x == 0 && ch > 'A')
    return(static_cast<int> (pow(y,2)) + static_cast<int> (ch));
  else if (x > 0)
    return (x + static_cast<int> (sqrt (y)) - static_cast<int> (ch));
  else 
    return (2 * x + static_cast<int> (y) - static_cast<int> (ch));
}

int main()
{

  int x;
  double y;
  char ch;
  
  cout << mystery(0, 6.5, 'K') << endl;
  cout << mystery(4,16.0, '#') << endl;
  cout << 2 * mystery(-11, 13.8, '8') << endl;

  return 0;
}
