#include <iostream>

    int main () {
        int input;
        std::cout << "Enter a Number: ";
        std::cin >> input;

        for (int i = 1; i <= input; i++) {
            for (int j = 1; j <= i; j++) {
                if ((i + j) % 2 == 0) {
                    std::cout << " 1 ";
                }
                    else {
                        std::cout << " 0 ";
                    }
            }

            std::cout << std::endl;
        }
    }