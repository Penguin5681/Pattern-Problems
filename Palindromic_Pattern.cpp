#include <iostream>

    int main() {
        
        int input;
        std::cout << "Enter any number: ";
        std::cin >> input;

        for (int i = 1; i <= input; i++) {
            int j;
            for (j = 1; j <= input - i; j++) {
                std::cout << "  ";
            }
            int k = i;
            for ( ; j <= input; j++){
                std::cout << k-- << " ";
            }
            k = 2;
            for ( ;j <= input + i - 1; j++) {
                std::cout << k++ << " ";
            }
                std::cout << std::endl;
        }
    }