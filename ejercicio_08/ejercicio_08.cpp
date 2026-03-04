#include <iostream>

int main() {
double balance = 1000;
int option;
int transactions = 0;

std::cout << "1 Deposit\n2 Withdraw\n3 Check\n";
std::cin >> option;

if (option == 1) {
double amount;
std::cin >> amount;
balance += amount;
transactions++;
}
else if (option == 2) {
double amount;
std::cin >> amount;
if (amount <= balance) {
balance -= amount;
transactions++;
}
else
std::cout << "Insufficient funds" << std::endl;
}
else if (option == 3) {
std::cout << "Balance: " << balance << std::endl;
}

std::cout << "Transactions: " << transactions << std::endl;

return 0;
}