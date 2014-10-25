#include <cctype>
#include <iostream>

using namespace std;

int main ()
{
  char ch;

  cout << "a. " << static_cast<char> (toupper ('$')) << endl;
  cout << "b. " << static_cast<char> (toupper ('3')) << endl;
  cout << "c. " << static_cast<char> (toupper ('#')) << endl;
  cout << "d. " << static_cast<char> (toupper ('d')) << endl;
  cout << "e. " << static_cast<char> (tolower ('+')) << endl;
  cout << "f. " << static_cast<char> (tolower ('?')) << endl;
  cout << "g. " << static_cast<char> (tolower ('H')) << endl;
  cout << "h. " << static_cast<char> (tolower ('%')) << endl;

return 0;
}
