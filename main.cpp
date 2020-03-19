#include <stdio.h>
#include <iostream>
#include <iomanip>
int main()
{
bool flag;
std::cout << "unesi " << true << " - " << false << std::endl;
std::cin >> flag;
std::cout << std::boolalpha << std::right << flag << std::endl;

int a = 255;
std::cout << "Uppercase hex: " << std::uppercase << std::hex << a << std::ends;
std::cout << "Lowercase hex: " << std::nouppercase << std::hex << a << std::endl;
std::cout << "dec " << std::dec << a << std::endl;
std::cout << "oct " << std::oct << a << std::endl;
std::cout << a << std::endl;

double pi = 3.141592;
std::cout << "pi = " << std::scientific << std::uppercase;
std::cout << std::setprecision(7) << std::setw(15) << std::setfill('0') << std::left;
std::cout << pi << std::endl;
}
