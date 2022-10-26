#include <iostream>

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    for (int i = 1; i <= input; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}