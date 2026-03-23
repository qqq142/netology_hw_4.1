#include <QCoreApplication>
#include <Windows.h>

#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int counter{};
    int num{};

    std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
    std::cin >> num;
    
    while (num != 0) {
        counter += num;
        std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
        std::cin >> num;
    }
    std::cout << "Ñóììà: " << counter;


    return 0;
}
