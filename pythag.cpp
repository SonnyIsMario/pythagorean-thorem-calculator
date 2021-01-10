#include "english.h"
#include <cmath>

int main () {
float a;
float b;
float c;

std::cout << "enter a leg: ";
std::cin >> a;
std::cout << "enter leg two: ";
std::cin >> b;
c = sqrt(pow(a,2) + pow(b,2));
std::cout << c;
return 0;
}
//c = sqrt(pow(a,2) + pow(b,2));
