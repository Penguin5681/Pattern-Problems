#include <iostream>

int main() {

    int input;
    std::cout << "Enter the No. of stars in first row: ";
    std::cin >> input;
        
        for (int i = input; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                std::cout << "*";
            }
            std::cout << '\n';
        }
}