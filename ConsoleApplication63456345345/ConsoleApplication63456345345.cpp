#include <iostream>
#include <cstdlib> 


void subtract(int a, int b) {
    int result = a - b;
    std::cout << "Ответ вычитания (" << a << " - " << b << "): " << result << std::endl;
}


void multiply(int a, int b) {
    int result = a * b;
    std::cout << "Ответ умножения (" << a << " * " << b << "): " << result << std::endl;
}


void divide(int a, int b) {
    if (b == 0) {
        std::cout << "Ошибка: Деление на ноль низя" << std::endl;
        exit(EXIT_FAILURE); 
    }
    double result = static_cast<double>(a) / b;
    std::cout << "Ответ Деления (" << a << " / " << b << "): " << result << std::endl;
}

int main() {

    setlocale(LC_ALL, "ru");

    int num1, num2;
    char operation;

    std::cout << "Первое число: ";
    std::cin >> num1;

    std::cout << "(-, *, /): ";
    std::cin >> operation;

    std::cout << "Второе число: ";
    std::cin >> num2;

    switch (operation) {
    case '-':
        subtract(num1, num2);
        break;
    case '*':
        multiply(num1, num2);
        break;
    case '/':
        divide(num1, num2);
        break;
    default:
        std::cout << "Ошибка: Неверная операция." << std::endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}