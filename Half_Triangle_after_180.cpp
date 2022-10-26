#include <iostream>

int main() {
    int n;
    std::cout << "Enter no. of stars in last row: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= n - i) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
            std::cout << std::endl;
    }
}