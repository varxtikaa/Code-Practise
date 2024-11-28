#include <iostream>

int main() {
    int day = 2;

    switch (day) {
        case 1:
            std::cout << "Sunday";
            break;
        case 2:
            std::cout << "Monday";
        case 3:
            std::cout << "Tuesday";
            break;
        default:
            std::cout << "Other day";
            break;
    }

    return 0;
}
