#include <iostream>

int main() {
    int input;
    std::cout << "Enter a Number: ";
    std::cin >> input;

        for (int i = 1; i <= input; i++) {
            for (int j = 1; j <= input - i; j++) {
                std::cout << " ";
            }
            for (int k = 1; k <= input; k++) {
                std::cout << " * ";
            }
                std::cout << std::endl;
        }
}