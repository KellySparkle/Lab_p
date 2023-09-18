#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;



int FirstProgram() {
    //Конвертер валют из рублей в доллары
    double rate{};
    double sum{};
    setlocale(LC_ALL, "Russian");
    std::cout << " Введите курс обмена: ";
    std::cin >> rate;
    std::cout << " Введите сумму: ";
    std::cin >> sum;
    const double output{ sum / rate };
    std::cout << sum << " рубли " << output << "$";
    return 0;
}

int SecondProgram()
{
    //Перевод метров в км
    const int m_per_km{ 1000 };
    setlocale(LC_ALL, "Russian");
    int meters{};
    std::cout << " Введите число метров: ";
    std::cin >> meters;
    const int kilometers{ meters / m_per_km };
    const int remaining_meters{ meters % m_per_km };
    std::cout << meters << " метры = " << kilometers << " километры и " << remaining_meters << " метры ";
    return 0;
}

//Показ текущей даты и времени
std::string currentDateTime() {
    setlocale(LC_ALL, "Russian");
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    char buffer[128];
    strftime(buffer, sizeof(buffer), "%m-%d-%Y %X", now);
    return buffer;
}

int ThirdProgram()
{
    std::cout << " Текущая дата и время: " << currentDateTime() << std::endl;
    return 0;
}

int main()
{
    FirstProgram();
    SecondProgram();
    ThirdProgram();
    return 0;
}