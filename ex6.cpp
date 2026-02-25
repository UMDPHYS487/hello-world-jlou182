#include <iostream>

int y;
int *x;

int main() {
    y = 10;
    x = &y;

    std::cout << "y: " << y <<"\n";
    std::cout << "*x: " << *x <<'\n';
    y = 20;
    std::cout << "y: " << y <<'\n';
    std::cout << "*x: " << *x <<"\n";
}