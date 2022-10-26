#include <iostream>

int main() {
    int input, num = 1;
    std::cout << "Enter a number: ";
    std::cin >> input;

    for (int i = 1; i <= input; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << num << " ";
            num++;
        }
        std::cout << std::endl;
    }

}