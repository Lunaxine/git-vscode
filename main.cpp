#include <iostream>
#include <string>
#include <print>

int main() {
    std::print("Enter your name: ");
    std::string name{""};
    std::getline(std::cin, name);
    std::println("Hello, {}!\n", name);

    return 0;
}