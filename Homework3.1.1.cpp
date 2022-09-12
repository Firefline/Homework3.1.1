// Homework3.1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");

    int size_first, size_second;

    if (!in.is_open()) {
        std::cout << "File not found" << std::endl;
        out.close();
        return 0;
    }

    in >> size_first;
    int* first_mass = new int[size_first];
    for (int i = 0; i < size_first; ++i) {
        in >> first_mass[i];
    }

    in >> size_second;
    int* second_mass = new int[size_second];
    for (int i = 0; i < size_second; ++i) {
        in >> second_mass[i];
    }

    out << size_second << std::endl;
    out << second_mass[size_second - 1] << " ";
    for (int i = 0; i < size_second - 1; ++i) {
        out << second_mass[i] << " ";
    }

    out << std::endl;

    out << size_first << std::endl;
    for (int i = 1; i < size_first; ++i) {
        out << first_mass[i] << " ";
    }
    out << first_mass[size_first - size_first];


    in.close();
    out.close();

    delete[] first_mass;
    delete[] second_mass;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
