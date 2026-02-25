#include <iostream>

int main() {
    int i;
    int j;
    int f;

    for(i = 1; i<11; i++){
        f = 1;
        for(j = 1; j < i+1; j++){
            f = f * j;
        }
        
        std::cout << "The factorial of " << i << " is " << f << "\n";
    }
}