#include <iostream>

int main() {
float weight,height;
std::cout << "Enter weight and height: ";
std::cin >> weight >> height;

float bmi = weight / (height * height);

std::cout << "BMI: " << bmi << std::endl;

if (bmi < 18.5)
std::cout << "Underweight" << std::endl;
else if (bmi < 25)
std::cout << "Normal" << std::endl;
else if (bmi < 30)
std::cout << "Overweight" << std::endl;
else
std::cout << "Obesity" << std::endl;

return 0;
}