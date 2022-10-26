#include <iostream>

int main() {
    int rows;
    int columns;

    std::cout << "Enter Rows: ";
    std::cin >> rows;

    std::cout << "Enter Columns: ";
    std::cin >> columns;

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= columns; j++) {
            std::cout << "*";
        }
        std::cout << "*" << std::endl;
    } 
        return 0;
}