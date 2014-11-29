/*
Dominique Ingoglia
CSC 160
Chapter 8
Problem #7
  This program takes in 5 candidate names and the number of votes they recieved and returns the percentage of votes each candidate recieved, the total number of votes and the winner of the election.
*/

//Include libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;


main () {
  // delare variables
  string names[5];
  int votes[5];
  int i;
  int j;
  int t;
  int s;
  double sum = 0;
  int winner; 
  int top_vote = 0;

  cout << "Enter 5 candidate's names and the votes received by the candidate." << endl;
  //take in names of candidates and number of votes 
  for (i=0; i<5; i++)
    cin >> names[i] >> votes[i];
  
  for (t=0; t<5; t++)
    sum = sum + votes[t];
  
  //determine the candidate with the most votes  
  for (s=0; s<5; s++)     
    if (top_vote < votes[s])
      { top_vote = votes[s];
        winner = s;
      }


  cout << "Candidate     Votes Received   % of Total Votes" << endl;
  //output a table of the candidates, the votes and % of votes recieved
  for (j=0; j<5; j++)
     cout << left << setw(10) << names[j] 
          << right << setw(10) <<  votes[j] 
          << fixed << setprecision(2) << setw(20) << (votes[j]/sum)*100 << endl;
  //output the total of votes and the winner of the election
  cout << "Total" << setw(20) << sum << endl;

  cout << "The Winner of the Election is " << names[winner] << "." << endl;

  //exit the program                                                 
  system("read -p \"Press enter to continue...\" n l s");
  cout << endl;

  return 0;
}
