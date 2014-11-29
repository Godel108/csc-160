#include <iostream>
#include <string>

using namespace std;


struct partsType
{
  string partName;
  int partNum;
  double price;
  int quantitiesInStock;
};


main (){
  partsType inventory[100];
  int index;

  for (index = 0; index < 100; index++)
    { cout <<  inventory[index].partName
       <<  inventory[index].partNum 
      <<  inventory[index].price
	   << inventory[index].quantitiesInStock;
    }



  return 0;
}
