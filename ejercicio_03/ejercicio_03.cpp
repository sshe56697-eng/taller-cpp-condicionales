#include <iostream>

int main() {
const int READ = 0b001;
const int WRITE = 0b010;
const int EXECUTE = 0b100;

int value;
std::cout << "Enter permission value (0-7): ";
std::cin >> value;

if (value & READ)
std::cout << "READ enabled" << std::endl;

if (value & WRITE)
std::cout << "WRITE enabled" << std::endl;

if (value & EXECUTE)
std::cout << "EXECUTE enabled" << std::endl;

int combined = READ | WRITE;
std::cout << "READ OR WRITE bitmask: " << combined << std::endl;

int removed = value & (~WRITE);
std::cout << "Value without WRITE: " << removed << std::endl;

return 0;
}