#include "iostream"

int main () {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "Skaiciuotuvas\n";

    std::cout << "enter one of these (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1; ";
    std::cin >> num1;

    std::cout << "Enter #2; ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
        default:
            std::cout << "enter a valid operation.";
            return 0;
    }
}
