#include <iostream>
#include <string>
#include <vector>

int main() {

    std::string name{""};
    std::string id{""};
    int num{};
    std::vector <int> total = {0, 0, 0};
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your student id: ";
    std::cin >> id;
    std::cout << "Enter the number of loop: ";
    std::cin >> num;

    for(int i{1}; i <= num; ++i) {
        total.at(0) += i;
    }

    int i{1};

    while(i <= num) {
        total.at(1) += i;
        i++;
    }

    i = 1;
    do {
        total.at(2) += i;
        i++;
    } while(i <= num);

    std::cout << "Name       : " << name << "\n";
    std::cout << "Student ID : " << id << "\n";
    std::cout << "-------------------------------------\n";
    std::cout << "The sum of 1 to " << num << " is " << total.at(0) << "\n";
    std::cout << "The sum of 1 to " << num << " is " << total.at(1) << "\n";
    std::cout << "The sum of 1 to " << num << " is " << total.at(2) << "\n";

    return 0;
}