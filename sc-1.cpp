//****************************************************************************
// Program:	sc ("small class")
// Author:	S. Turner
//
// This program uses the "small class" so that you can gain practice using
// pointers, new, delete, and the arrow operator.
//****************************************************************************

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#include "smallclass.h"
#include "smallclass.cpp"

int main() {
  int i;			// Iterator variable.

  SmallClass *sptr1;		// Pointers used in a few places.
  SmallClass *sptr2;
  SmallClass *sptr3;

  //**********************************************************
  // Part 4: dynamically create a new single instance and use
  // pointers to make changes to it, printing them out.
  // use the dereferencing, and the arrow operator
  //**********************************************************


  //**********************************************************
  // Part 5: dynamically allocate an array of 20 instances.
  // Use an extra pointer, with incrementing of the pointer
  // inside a for loop. Use the arrow operator to call the
  // setNumber such that element i's number is i * 2.
  //**********************************************************

  //**********************************************************
  // Part 6: dynamically allocate another array of 30
  // instances. Then use a for loop to copy the first 20 from
  // the first array to the second. Print all of the values
  // of the second array to verify the copy worked.
  //**********************************************************
  
  //**********************************************************
  // Not an official numbered "part", but delete the arrays
  // and set their pointers to NULL.
  //**********************************************************

  return 0;
}
