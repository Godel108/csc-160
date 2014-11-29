#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct studentType{

  string studentFName;
  string studentLName;
  int testScore;
  char grade;

};

studentType student[20];
ifstream inFile;
ifstream outFile;
int ahighscore;
void intodata(ifstream& inFile, ifstream& outFile, studentType student);
void inputdata(studentType student);
void printscore(ifstream& outFile, int ahighscore, studentType student);
int highscore(int ahighscore, studentType student);


int main(){

   intodata(inFile, outFile, student[20]);
   inputdata(student[20]);
   highscore(ahighscore, student[20]);
   printscore(outFile, ahighscore, student[20]);

   system("read -p \"Press enter to continue...\" n l s");
   cout << endl;

  return 0;
};


void intodata(ifstream& inFile, studentType student[20]){
   int i;
   inFile.open("Ex2Data.txt");
    
    for(i=0; i<20; i++)
      { inFile >> student[i].studentLName 
	  >> student[i].studentFName >> student[i].testScore;
      }

   inFile.close();
    
  };



void inputdata(studentType student[20]){
  int i;
  for(i=0; i<20; i++){
   if (student[i].testScore >= 90) 
      student[i].grade = 'A';
   else if (student[i].testScore >= 80)
      student[i].grade  = 'B';
   else if (student[i].testScore >= 70)
      student[i].grade  = 'C';
   else if (student[i].testScore >= 60)
      student[i].grade  = 'D';
   else
      student[i].grade  = 'F';
   }
};

int highscore(int ahighscore, studentType student[20]){
  int i;
  for (i=0; i<20; i++)
    if (ahighscore < student[i].grade)
      { ahighscore = student[i].grade;
	ahighscore = i;
      };
  return(ahighscore);
};

void printscore(ifstream& outFile, int ahighscore, studentType student[20]){
  fstream::open.outFile("Ex2Out.txt");
  int i;
  cout << "Student Name           Test Score   Grade" << endl;
  for (i=0; i<20; i++){
    cout << left << setw(24) << student[i].studentLName 
            << ", " << student[i].studentFName
     	    << right << setw(10) <<  student[i].testScore
            << right << setw(5) << student[i].grade;
      };
 cout << "Highest Test Score: " << ahighscore << endl;
 cout << "Students having the highest test score:" << endl;

  //  for (i=0; i<20; i++){
  //   if (student[i].grade == highscore)
  //   cout << student[i].studentLName << ", " << student[i].studentFName};
 fstream::close.outFile();

};




