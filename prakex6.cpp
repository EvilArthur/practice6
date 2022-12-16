// prakex6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
#include <vector>

int main()
{
    vector <int> numbers;
    vector <int>::iterator Iter;
    numbers.push_back(1);                                                       // push_back() добавляет значение в конец вектора
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.erase(numbers.begin() + 1, numbers.end() - 2);                      // erase() удаляет значение в диапозоне
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.insert(numbers.begin() + 1, 3, 10);                                 // insert() добавляет значение нужное количество раз
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.emplace_back(10);                                                   // emplace_back(), похож на push_back(), но не копирует значение, а создает
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.resize(10);                                                         // resize(), меняет размер вектора и заполняает его
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.resize(5);                                                          // resize(), или удаляет 
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;                                                               
    cout << numbers.capacity() << endl;
    numbers.reserve(20);                                                        // reserve() резервирует минимальную длинну хранилища
    cout << numbers.capacity() << endl;
    numbers.shrink_to_fit();                                                    // shrink_to_fit() снижает минимальную длинну хранилища до минимально возможной
    cout << numbers.capacity() << endl;
    numbers.clear();                                                            // clear() очищает вектор
    numbers = { 10, 9, 8, 7, 6, 5 };                                            // с помощью {элемент [0], [1], [2], ...} можно присвоить значение вектору
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers[4] = 99999;                                                         // с помоью vector[n] можно присвоить n-ому элменту значение
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
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
