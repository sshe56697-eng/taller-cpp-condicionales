#include <iostream>

int main() {
int year;
std::cout << "Enter year: ";
std::cin >> year;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
std::cout << "Leap year" << std::endl;
else
std::cout << "Not a leap year" << std::endl;

return 0;
}