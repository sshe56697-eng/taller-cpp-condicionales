#include <iostream>
#include <cmath>

int main() {
double a,b;
char op;

std::cout << "Enter expression: ";
std::cin >> a >> op >> b;

switch(op) {
case '+':
std::cout << a + b << std::endl;
break;
case '-':
std::cout << a - b << std::endl;
break;
case '*':
std::cout << a * b << std::endl;
break;
case '/':
if (b != 0)
std::cout << a / b << std::endl;
else
std::cout << "Division by zero" << std::endl;
break;
case '%':
if (b != 0)
std::cout << fmod(a,b) << std::endl;
else
std::cout << "Division by zero" << std::endl;
break;
default:
std::cout << "Invalid operator" << std::endl;
}

return 0;
}