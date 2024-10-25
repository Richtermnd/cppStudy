#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>
#include <print>

int main() {
    std::string name, surname, lastName;
    std::cin >> name;
    std::cin >> lastName;
    std::cin >> surname;
    std::string a = surname + " " + name + " " + lastName;
    std::string b = std::string(1, toupper(name[0])) + '.' + std::string(1, toupper(surname[0])) + '.' + std::string(1, toupper(lastName[0]));
    std::string c = std::string(1, toupper(surname[0])) + surname.substr(1, surname.length()) + '.' + \
                    std::string(1, toupper(name[0])) + '.' + std::string(1, toupper(lastName[0]));
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    return 0;
}
