/*
Dominique Ingoglia
chapter 9
Program problem 1
*/

//list libraries used in program
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//a structure with the contents of the fruit type
struct fruitType 
{
  string fruitName;
  string color;
  int fat;
  int sugar;
  int carbohydrate;
};

//declare the fruitType variable
fruitType fruityFruit;


int main()
{
  //gather the information from the user about the fruit
  cout << "Name a fruit: ";
  cin >> fruityFruit.fruitName;
  cout << "Now what is the color of this fruit?: ";
  cin >> fruityFruit.color;
  cout << "How fatty is this fruit gram wise?: ";
  cin >> fruityFruit.fat;
  cout << "Sugar content?: ";
  cin >> fruityFruit.sugar;
  cout << "How about carbohydrates: ";
  cin >> fruityFruit.carbohydrate;

  //output the data about the fruit
  cout << endl << "Here is what you told me about the " << fruityFruit.fruitName << "." << endl
       << "Color: " << fruityFruit.color << endl 
       << "Fat: "   << fruityFruit.fat << endl
       << "Sugar: " << fruityFruit.sugar << endl
       << "Carbohydrates: " << fruityFruit.carbohydrate << endl;

  //exit the program
  system("read -p \"Press enter to continue...\" n l s");
  cout << endl;

  return 0;       
}


