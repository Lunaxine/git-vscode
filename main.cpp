#include <iostream>

int main() {
    std::cout << "Enter the number loop: ";
    int num{};
    int total{0};
    std::cin >> num;

    for(int i = 0; i < num; ++i) {
        total += i+1;
    }

    std::cout << "The sum of 1 to " << num << " is " << total;

    return 0;
}