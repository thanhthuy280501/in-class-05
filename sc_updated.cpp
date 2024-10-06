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
  int i;                  // Iterator variable.

  SmallClass *sptr1;       // Pointers used in a few places.
  SmallClass *sptr2;
  SmallClass *sptr3;

  //**********************************************************
  // Part 4: dynamically create a new single instance and use
  // pointers to make changes to it, printing them out.
  // use the dereferencing, and the arrow operator
  //**********************************************************
  
  sptr1 = new SmallClass();  // Dynamically create an instance of SmallClass
  (*sptr1).setName("John");  // Using pointer dereferencing to set name
  (*sptr1).setNumber(100);   // Using pointer dereferencing to set number
  cout << "Using dereferencing: " << (*sptr1).getName() << " - " << (*sptr1).getNumber() << endl;

  sptr1->setName("Doe");     // Using the arrow operator to set name
  sptr1->setNumber(200);     // Using the arrow operator to set number
  cout << "Using arrow operator: " << sptr1->getName() << " - " << sptr1->getNumber() << endl;

  delete sptr1;              // Free dynamically allocated memory
  sptr1 = nullptr;           // Set pointer to nullptr


  //**********************************************************
  // Part 5: dynamically allocate an array of 20 instances.
  // Use an extra pointer, with incrementing of the pointer
  // inside a for loop. Use the arrow operator to call the
  // setNumber such that element i's number is i * 2.
  //**********************************************************
  
  sptr2 = new SmallClass[20];  // Dynamically allocate an array of 20 instances
  SmallClass *auxPtr = sptr2;  // Auxiliary pointer to iterate

  for (i = 0; i < 20; i++) {
    auxPtr->setNumber(i * 2);   // Set number using the arrow operator
    cout << "Element " << i << ": " << auxPtr->getNumber() << endl;
    auxPtr++;                   // Increment the auxiliary pointer
  }

  //**********************************************************
  // Part 6: dynamically allocate another array of 30
  // instances. Then use a for loop to copy the first 20 from
  // the first array to the second. Print all of the values
  // of the second array to verify the copy worked.
  //**********************************************************
  
  sptr3 = new SmallClass[30];  // Allocate a second array of 30 instances

  for (i = 0; i < 20; i++) {
    sptr3[i].setNumber(sptr2[i].getNumber());  // Copy the first 20 elements
  }

  // Print the second array to verify the copy
  for (i = 0; i < 30; i++) {
    cout << "Array 2, Element " << i << ": " << sptr3[i].getNumber() << endl;
  }

  //**********************************************************
  // Not an official numbered "part", but delete the arrays
  // and set their pointers to NULL.
  //**********************************************************

  delete[] sptr2;  // Free dynamically allocated array
  delete[] sptr3;  // Free second array
  sptr2 = nullptr; // Set pointer to nullptr
  sptr3 = nullptr; // Set pointer to nullptr

  return 0;
}
