#include <iostream>

// Структура для представлення числа
struct Number {
    int value;
};

// Функція для перевірки, чи є число парним двозначним
bool isEvenTwoDigit(const Number& num) {
    return (num.value >= 10 && num.value <= 99 && num.value % 2 == 0);
}

int main() {
    // Оголошення об'єкту типу Number
    Number number;

    // Введення числа
    std::cout << "Enter a positive integer: ";
    std::cin >> number.value;

    // Перевірка, чи є число парним двозначним
    if (isEvenTwoDigit(number)) {
        std::cout << "This number is an even two-digit number." << std::endl;
    }
    else {
        std::cout << "This number is not an even two-digit number." << std::endl;
    }

    return 0;
}
