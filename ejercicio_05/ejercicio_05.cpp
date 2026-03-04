#include <iostream>
#include <string>

int main() {
int grade;
std::cout << "Enter grade (0-100): ";
std::cin >> grade;

std::string status;
char letter;

if (grade >= 90)
letter = 'A';
else if (grade >= 80)
letter = 'B';
else if (grade >= 70)
letter = 'C';
else if (grade >= 60)
letter = 'D';
else
letter = 'F';

if (letter == 'F')
status = "Failed";
else
status = "Passed";

std::cout << "Letter: " << letter << std::endl;
std::cout << "Status: " << status << std::endl;

return 0;
}