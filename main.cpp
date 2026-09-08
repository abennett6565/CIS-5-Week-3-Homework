#include <iostream>
#include <string>
using std::cout;

// Homework 3 — Andrew Bennett
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO: Lab 3 boxes — initialize on the same line
  std::string name = "Andrew_Bennett";
  int age = 35;
  double height_m = 5.8;
  char initial_f = 'A';
  char initial_l = 'B';
  bool student = false;

  // TODO: two more from this week's menu
  int credits = 12;
  //using int here because only a whole number is reaquired and it uses less memory than a double
  double gpa = 3.5;
  //using a double here because a decimal place is required in order to correctly display a gpa


  // TODO: change one value from a first choice. Comment the old value,
  // the new value, and why the console followed.
  student  = true; // old value: false; changed it to true. The output will reflect this change

  // TODO: labeled lines from the names
  // TODO: one short paragraph from those same names — not leftover quotes
  cout << "=== About me ===\n";
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "Height: " << height_m << "\n";
  cout << "First Initial: " << initial_f << "\n";
  cout << "Last Initial: " << initial_l << "\n";
  cout << "Is student: " << student << "\n";
  cout << "Year: " << CURRENT_YEAR << "\n";

  cout << name << " is " << age << ", taking " << credits << " credits in " << CURRENT_YEAR << ", with a " << gpa << " gpa.";

  // TODO: two lines that would not compile — leave them commented
  //initial_f = "A"; //would not compile - a char must be enceased with '' not ""
  //name = 'Andrew_Bennett' //would not compile - a string must be encased with "" not ''

  return 0;
}
