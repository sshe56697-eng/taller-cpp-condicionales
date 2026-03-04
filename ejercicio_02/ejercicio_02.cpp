#include <iostream>
#include <cmath>

int main () {
double a,b,c;
std::cout << "Enter the sides of a triangle: ";
std::cin >> a >> b >> c;

if (a+b>c && a+c>b && b+c>a) {

std::cout<<"Valid triangle"<<std::endl;

if (a==b && b==c) {
std::cout<<"Equilateral triangle"<<std::endl;
}
else if (a==b || a==c || b==c) {
std::cout<<"Isosceles triangle"<<std::endl;
}
else {
std::cout<<"Scalene triangle"<<std::endl;
}

double largest = a;

if (b > largest)
largest = b;

if (c > largest)
largest = c;

if (largest == a) {
if (pow(a,2) == pow(b,2) + pow(c,2))
std::cout<<"Right triangle"<<std::endl;
else if (pow(a,2) > pow(b,2) + pow(c,2))
std::cout<<"Obtuse triangle"<<std::endl;
else
std::cout<<"Acute triangle"<<std::endl;
}
else if (largest == b) {
if (pow(b,2) == pow(a,2) + pow(c,2))
std::cout<<"Right triangle"<<std::endl;
else if (pow(b,2) > pow(a,2) + pow(c,2))
std::cout<<"Obtuse triangle"<<std::endl;
else
std::cout<<"Acute triangle"<<std::endl;
}
else {
if (pow(c,2) == pow(a,2) + pow(b,2))
std::cout<<"Right triangle"<<std::endl;
else if (pow(c,2) > pow(a,2) + pow(b,2))
std::cout<<"Obtuse triangle"<<std::endl;
else
std::cout<<"Acute triangle"<<std::endl;
}

}
else {
std::cout<<"Not a valid triangle"<<std::endl;
}

return 0;
}