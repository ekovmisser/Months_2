#include <iostream>

enum class months {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    months number = months::January;
    int fl = static_cast<int>(number);
    bool exit = true;
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> fl;
        switch (enum months(fl)) {
            case months::January:
            std::cout << "Январь" << std::endl;
            break;
            case months::February:
            std::cout << "Февраль" << std::endl;
            break;
            case months::March:
            std::cout << "Март" << std::endl;
            break;
            case months::April:
            std::cout << "Апрель" << std::endl;
            break;
            case months::May:
            std::cout << "Май" << std::endl;
            break;
            case months::June:
            std::cout << "Июнь" << std::endl;
            break;
            case months::July:
            std::cout << "Июль" << std::endl;
            break;
            case months::August:
            std::cout << "Август" << std::endl;
            break;
            case months::September:
            std::cout << "Сентябрь" << std::endl;
            break;
            case months::October:
            std::cout << "Октябрь" << std::endl;
            break;
            case months::November:
            std::cout << "Ноябрь" << std::endl;
            break;
            case months::December:
            std::cout << "Декабрь" << std::endl;
            break;
        } switch (fl > 12||fl < 0) {
        case 1:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    } while (fl != 0);
    std::cout << "До свидания " << std::endl;
    return 0;
}

