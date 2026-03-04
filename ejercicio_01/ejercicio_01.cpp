#include <iostream>
#include <iomanip>
int main () {
double temperature;
std::cout <<"Enter Celsius temperature: ";
std::cin>> temperature;
double F = temperature * 9/5 + 32;
double K = temperature + 273.15;
double R = (temperature + 273.15) * 9/5;

std::cout << std::fixed << std::setprecision(2);
std::cout << "Equals to: " << F << "° Fahrenheit" << std::endl;
std::cout << "Equals to: " << K << "Kelvin" << std::endl;
std::cout << "Equals to: " << R << "° Rankine" << std::endl;


    return 0;   
}