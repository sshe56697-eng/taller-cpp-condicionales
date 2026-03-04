#include <iostream>

int main() {
int a,b;
std::cout << "Enter two numbers: ";
std::cin >> a >> b;

a = a + b;
b = a - b;
a = a - b;

std::cout << "After arithmetic swap: " << a << " " << b << std::endl;

a = a ^ b;
b = a ^ b;
a = a ^ b;

std::cout << "After XOR swap: " << a << " " << b << std::endl;

return 0;
}