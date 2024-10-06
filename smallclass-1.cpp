#include "smallclass.h"

using namespace std;

//*********************************************************************
// Constructor section
//*********************************************************************
SmallClass::SmallClass() : name("Ralph"), number(0) { }

SmallClass::SmallClass(int numb) : name("Ralph"), number(numb) { }

SmallClass::SmallClass(string newName, int numb) : name(newName), number(numb) { }

//*********************************************************************
// Overloaded insertion operator.
//*********************************************************************
ostream &operator<<(ostream &o, const SmallClass &m) {
  return o << m.name << " - " << m.number;
}

//*********************************************************************
// An overloaded insertion operator, for input.
//*********************************************************************
istream &operator>>(istream &in, SmallClass &m) {
  return in >> m.name >> m.number;
}

