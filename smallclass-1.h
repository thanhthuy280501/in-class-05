#ifndef SMALLCLASS_H
#define SMALLCLASS_H

class SmallClass {
  public:
    SmallClass();		// Constructor.
    SmallClass(int);		// 1-param Constructor.
    SmallClass(string, int);	// 2-param Constructor.

    // Mutators to set number and name
    void setNumber(int num) { number = num; }
    void setName(string n) { name = n; }

    // Accessors to get number and name
    int getNumber() { return number; }
    string getName() { return name; }

    // Overloaded I/O stream operators
    friend ostream & operator<< (ostream&, const SmallClass&);
    friend istream & operator>> (istream&, SmallClass&);

  private:
    string name;		// Just a name
    int number;			// Just a number
};

#endif
