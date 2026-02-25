#include <iostream>

int main() {
    int n;
    int m;

    std::cout << "Input an integer: ";
    std::cin >> n;

    switch(n%2 == 0 && n < 10){
        case true:
            m = n*n;
            std::cout << m;
            break;

        case false:
            std::cout << "hahaha";
    }
}