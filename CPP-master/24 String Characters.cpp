//Strings

#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  
  //Concatination 
  string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;

// Adding Numbers and Strings
  string x = "10";
  string y = "20";
  string z = x + y;   // z will be 1020 (a string)
  
  
  // String length
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.size();
  
  // Access String
  string myString = "Hello";
  cout << myString[0];
  // Outputs H
  
  //Changing Strings
  string myString = "Hello";
myString[0] = 'J';
cout << myString;
// Outputs Jello instead of Hello

//User Input Strings
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;
  
  // Omitting Namespace
  std::string greeting = "Hello";
  std::cout << greeting;
  
  return 0;
}
