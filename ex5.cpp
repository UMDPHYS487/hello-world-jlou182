#include <iostream>

int factorial(int N) {
    int j;
    int f;

    f = 1;
    for(j = 1; j < N+1; j++){
        f = f * j;
    }
    
    std::cout << "The factorial of " << N << " is " << f << "\n";
    return N;
}

int main() {
    int N;

    std::cout << "Please enter integer value: ";
    std::cin >> N;

    factorial(N);
}