//****************************************************************************
// Program:	fa.cpp ("fill array")
// Author:	S. Turner
//
// Small demo program to help you understand how to program pass-by-pointer,
// as well as some uses of arrays as pointers.
//****************************************************************************

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//***********************************************************
// This is the prototype. Define it below main.
//***********************************************************
void fillArray(int *a, int count, int f);

int main() {

  int i;				// Loop iterator
  int count;				// count of no. of array elements
  int *a;				// dynamically allocated array
  int b[20];				// Const pointer array 
  int factor;				// Multiply factor

  cout << "How many array elements? ";
  cin >> count;
  cout << "Enter multiply factor: ";
  cin >> factor;

// Statement to allocate the array goes here

  fillArray(a, count, factor);
  fillArray(b, count, factor + 1);

  for (i = 0; i < count; i++)
    cout << a[i] << " - " << b[i] << endl;

  return 0;
}

//*****************************************************
// Complete this function. It is to fill the
// array as specified in the requirements of the ICE.
// The function should "fill" the array by making each
// element be "i * f" where i is a loop variable
// iterating through, and f is the third parameter
// listed here.
//*****************************************************
void fillArray(int *Array, int n, int f) {

}
