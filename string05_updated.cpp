#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

//****************************************************************************
// Program:	string05.cpp
// Author:	S. Turner
// Date:	09/21/22
//
// In its non-improved form, this program reads some command-line parameters,
// forcing the user to type four arguments past the program executable
// name (five arguments total). The task for the in-class exercise is to
// implement up to three functions, the prototypes of which are shown
// right below this comment block.
//****************************************************************************

//**************************************************************
// This builds a sentence using argc and argv.
// It must make the 1st character upper case,
// and add a punctuation mark of user choice to the end.
//**************************************************************
void buildSentence(int aCount, char *aVector[], string& newString);

//**************************************************************
// This removes all spaces from the user-typed line.
//**************************************************************
void removeSpaces(const string& oldString, string& newString);

//**************************************************************
// This removes extra whitespaces from the user-typed line,
// replacing them with single spaces.
//**************************************************************
void removeExtraSpaces(const string& oldString, string& newString);

int main(int argc, char *argv[]) {

  string s1, s2, s3, s4;
  int i;

  if (argc != 5) {
    cout << "Usage: " << argv[0] << " str1 str2 str3 str4" << endl;
  }

  buildSentence(argc, argv, s1);
  cout << "s1 is: " << s1 << endl << endl;

  cout << "Enter a line that may include extra spaces between words: ";
  getline(cin, s2);

  removeSpaces(s2, s3);
  cout << "s3 is: " << s3 << endl << endl;

  removeExtraSpaces(s2, s4);
  cout << "s4 is: " << s4 << endl << endl;

  return 0;
}

//**************************************************************
// Definition of buildSentence()
//**************************************************************
void buildSentence(int aCount, char *aVector[], string& newString) {
    // Concatenate words into a single string with spaces between them
    for (int i = 1; i < aCount; ++i) {
        newString += aVector[i];
        if (i < aCount - 1) {
            newString += " ";
        }
    }

    // Capitalize the first letter
    if (!newString.empty()) {
        newString[0] = toupper(newString[0]);
    }

    // Ask for sentence type (question, exclamation, or dull)
    char choice;
    cout << "What type of sentence is this? (q for question, e for exclamation, anything else for dull): ";
    cin >> choice;

    // Add corresponding punctuation
    switch (choice) {
        case 'q':
        case 'Q':
            newString += "?";
            break;
        case 'e':
        case 'E':
            newString += "!";
            break;
        default:
            newString += ".";
            break;
    }
}

//**************************************************************
// Definition of removeSpaces()
//**************************************************************
void removeSpaces(const string& oldString, string& newString) {
    newString.clear();  // Ensure newString is empty
    for (char ch : oldString) {
        if (ch != ' ') {
            newString += ch;
        }
    }
}

//**************************************************************
// Definition of removeExtraSpaces()
//**************************************************************
void removeExtraSpaces(const string& oldString, string& newString) {
    newString.clear();  // Ensure newString is empty
    bool inSpace = false;  // Track if we're in a sequence of spaces

    for (char ch : oldString) {
        if (ch == ' ' || ch == '	') {
            if (!inSpace) {  // Only add a single space when encountering spaces/tabs
                newString += ' ';
                inSpace = true;
            }
        } else {
            newString += ch;
            inSpace = false;  // Reset space flag after a non-space character
        }
    }

    // Trim any trailing spaces if they exist
    if (!newString.empty() && newString.back() == ' ') {
        newString.pop_back();
    }
}
