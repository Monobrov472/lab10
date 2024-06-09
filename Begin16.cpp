#include <iostream>

// Структура, що представляє точку на числовій осі
struct Point {
    int x;
};

// Функція для знаходження відстані між двома точками
int distance(const Point& p1, const Point& p2) {
    // Використовуємо абсолютне значення різниці між координатами
    return std::abs(p2.x - p1.x);
}

int main() {
    // Задання координат точок
    Point point1, point2;
    point1.x = 3;
    point2.x = 9;

    // Знаходження відстані між точками
    int dist = distance(point1, point2);

    // Виведення результату
    std::cout << "Distance between points: " << dist << std::endl;

    return 0;
}
