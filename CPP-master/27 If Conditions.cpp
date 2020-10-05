//Conditions

#include <iostream>
using namespace std;

int main() {
  int time = 22;
  if (time < 10) {
    cout << "Good morning."; // If
  } else if (time < 20) {
    cout << "Good day."; //Else If
  } else {
    cout << "Good evening.";// Else
  }
  //string result = (time < 18) ? "Good day." : "Good evening."; <-- Short Hand if.
  return 0;
}

