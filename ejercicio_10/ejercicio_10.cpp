#include <iostream>
#include <cmath>

int main() {
bool weekend;
char type;
int code;
double amount;

std::cout << "Client type (V/N): ";
std::cin >> type;

std::cout << "Product code: ";
std::cin >> code;

std::cout << "Amount: ";
std::cin >> amount;

std::cout << "Weekend (1/0): ";
std::cin >> weekend;

double discount = 0;

if (type == 'V')
discount += 0.10;

switch(code) {
case 1:
discount += 0.05;
break;
case 2:
discount += 0.07;
break;
case 3:
discount += 0.03;
break;
}

if (weekend)
discount += 0.05;

if (discount > 0.5)
discount = 0.5;

double finalPrice = amount * pow((1 - discount),1);

std::cout << "Final price: " << finalPrice << std::endl;

return 0;
}