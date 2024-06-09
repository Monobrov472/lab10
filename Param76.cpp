#include <iostream>

// Припустимо, що TTime виглядає так:
struct TTime {
    int hours;
    int minutes;
    int seconds;
};

// Процедура NextSec, яка змінює час на +1 секунду
void NextSec(TTime& time) {
    // Перевірка на правильність часу (наприклад, чи є години, хвилини і секунди в межах правильних значень)
    if (time.hours >= 0 && time.hours < 24 &&
        time.minutes >= 0 && time.minutes < 60 &&
        time.seconds >= 0 && time.seconds < 60) {
        // Збільшення секунд на 1
        time.seconds++;

        // Перевірка на переповнення секунд
        if (time.seconds >= 60) {
            time.seconds = 0;
            time.minutes++;

            // Перевірка на переповнення хвилин
            if (time.minutes >= 60) {
                time.minutes = 0;
                time.hours++;

                // Перевірка на переповнення годин
                if (time.hours >= 24) {
                    time.hours = 0;
                }
            }
        }
    }
}

int main() {
    // Приклад використання NextSec з п'ятьма заданими моментами часу
    TTime time1 = { 10, 30, 45 };
    NextSec(time1);
    std::cout << "Time after NextSec: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << std::endl;

    TTime time2 = { 23, 59, 59 };
    NextSec(time2);
    std::cout << "Time after NextSec: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << std::endl;

    TTime time3 = { 12, 44, 23 };
    NextSec(time3);
    std::cout << "Time after NextSec: " << time3.hours << ":" << time3.minutes << ":" << time3.seconds << std::endl;

    TTime time4 = { 22, 51, 32 };
    NextSec(time4);
    std::cout << "Time after NextSec: " << time4.hours << ":" << time4.minutes << ":" << time4.seconds << std::endl;

    TTime time5 = { 21, 43, 21 };
    NextSec(time5);
    std::cout << "Time after NextSec: " << time5.hours << ":" << time5.minutes << ":" << time5.seconds << std::endl;



    // Додайте інші моменти часу за необхідності...

    return 0;
}
