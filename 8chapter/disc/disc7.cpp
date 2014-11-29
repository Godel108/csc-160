/*
Dominique Ingoglia
Programming discussion
Chapter 7
Problem #1
*/
#include <iostream>
#include <cstdlib>

using namespace std;

enum triangleType{scalene, isosceles,equilateral,noTriangle};

triangleType triangleShape(int side1,int side2,int side3);  


main(){

  int side1, side2, side3;
  triangleType shape;

  cout << "Input three lengths corresponding to the sides of the triangles." << endl;

  triangleShape(side1,side2,side3);


  switch (shape)
    {
   case noTriangle:
      cout << "This isn't a triangle.";
      break;
   case equilateral:
      cout << "This is an equilateral triangle.";
      break; 
   case isoceles:
      cout << "This is an isoceles triangle.";
      break;
   case scalene:
      cout << "This is a scalene triangle.";
      break;
    }

  //exit the program                                                 
  system("read -p \"Press enter to continue...\" n l s");
  cout << endl;

  return 0;
}

triangleType triangleShape(side1,side2,side3){

    cin >> side1 >> side2 >> side3;

    if (((side1 + side2 < side3) || (side2 + side3 < side1) || (side3 + side1  < side2)) || ((side1 || side2 || side3) < 1))
      return noTriangle;
    else if (side1 == side2 == side3)
      return equilateral;
    else if ((side1 == side2 != side3) || (side2 == side3 != side1) || (side1 == side3 != side2))
      return isosceles;
    else if (side1 != side2 != side3)
      return scalene;

  }
