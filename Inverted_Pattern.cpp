#include <iostream>

int main() {
    
    int input;
    std::cout << "Enter a Number: ";
    std::cin >> input;

    for (int i = 1; i <= input; i++) {
        for (int j = 1; j <= input + 1 - i; j++) {
            std::cout << j << " ";
        }
            std::cout << '\n';
    }
}