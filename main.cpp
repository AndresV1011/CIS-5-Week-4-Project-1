#include <iostream>
#include <string>

// Project 1 — Andres Valenzuela
// CIS 5 Week 04 · Student card

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO (week 3): declare and initialize the four boxes
  //   first (std::string), age (int), credits (int), gpa (double)
  std::string name = "Andres V";
  int age = 15;
  int credits = 10;
  double gpa = 4.3;

  // TODO (week 2): a cout question, then a cin into the box — four times
  std::cout << "Name?\n";
  std::cin >> "Andres V\n";
  std::cout << "Age?\n";
  std::cin >> "15\n";
  std::cout << "How much credits this term?\n";
  std::cin >> "10\n";
  std::cout << "GPA?\n";
  std::cin >> "4.3\n";

  // TODO (week 4): one computed line with an operator
   
  int grad_year = CURRENT_YEAR + 4;


  // TODO (weeks 1-4): print the card from the variable names
  //   header line, one labeled line per variable, then the computed value
  std::cout << "\n";
  std::cout << "=== Student Card ===\n";
  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Credits: " << credits << "\n";
  std::cout << "GPA: " << gpa << "\n";
  std::cout << "Expected graduation: " << grad_year << "\n";


  return 0;
}
