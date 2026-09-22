#include <iostream>
#include <string>

int main() {

    float num;
    float num2;
    char op;
    double result;

    std::string error;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (std::cin.fail()) {
        std::cout << "That's not a number!";
        return 1;
    }

    std::cout << "Enter a second number: ";
    std::cin >> num2;

    if (std::cin.fail()) {
        std::cout << "That's not a number!";
        return 1;
    }

    std::cout << "Enter an operator (+/-/*): ";
    std::cin >> op;

    if (std::cin.fail()) {
        std::cout << "That's not a number!";
        return 1;
    }

    switch (op) {

        case '+':
            result = num + num2;
            break;

        case '-':
            result = num - num2;
            break;

        case '/':
            result = num / num2;
            break;

        case '*':
            result = num * num2;
            break;

        default:
            error = "operator";
            break;
    }

    if (!error.empty()) {
        std::cout << "You've entered an invalid " << error;
        return 1;
    }

    std::cout << "Your result is: " << result;

    return 0;
}

