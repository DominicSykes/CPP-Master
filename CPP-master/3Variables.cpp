//Variables
#include <iostream>
using namespace std;

int main() {
  int myNum;
  myNum = 15;

    // Good name
  int minutesPerHour = 60;
  
  // OK, but not so easy to understand what m actually is
  int m = 60;
    const int minutesPerHour = 60;
  const float PI = 3.14;
  
  cout << minutesPerHour << "\n";
  cout << PI;
  cout << minutesPerHour << "\n";
  cout << m;
  
    cout << myNum;
  return 0; // Seperate these into different files later

}

