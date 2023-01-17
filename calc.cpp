#include "iostream"

int main () {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "Skaiciuotuvas\n";

    std::cout << "Iveskite operatoriu (+ - * /): ";
    std::cin >> op;

    std::cout << "Iveskite 1 skaiciu: ";
    std::cin >> num1;

    std::cout << "Iveskite 2 skaiciu: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Rezultatas: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Rezultatas: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Rezultatas: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Rezultatas: " << result << '\n';
        default:
            std::cout << "Iveskite tinkama operatoriu.";
            return 0;
    }
}
