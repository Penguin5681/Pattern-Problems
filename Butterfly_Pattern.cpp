#include <iostream>

int main() {

    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    for (int i = 1; i <= input; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        int white_Space = (2 * input) - (2 * i);

        for (int k = 1; k <= white_Space; k++) {
            std::cout << " ";
        }
        for (int l = 1; l <= i; l++) {
            std::cout << "*";
        }

        std::cout << '\n';
    }
            for (int i = input; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    std::cout << "*";
                }
                int white_Space = (2 * input) - (2 * i);

                for (int k = 1; k <= white_Space; k++) {
                    std::cout << " ";
                }
                for (int l = 1; l <= i; l++) {
                    std::cout << "*";
                }

                std::cout << '\n';
            }
        }