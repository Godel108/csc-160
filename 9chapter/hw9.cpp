#include <iostream>
#include <string>

using namespace std;

struct nameType
{
  string first;
  string last;
};

struct courseType
{
  string name;
  int callNum;
  int credits;
  char grade;
};


struct studentType
{
  nameType name;
  double gpa;
  courseType course;
};

studentType student;
studentType classList[100];
courseType course;
nameType name;


main ()
{
  int index;
  for (index = 0; index < 100; index++)
    { classList[index].gpa = 0.0;
    }
  classList[31].gpa= 0.75;
  cout << classList[31].gpa;

  return (0);
}
