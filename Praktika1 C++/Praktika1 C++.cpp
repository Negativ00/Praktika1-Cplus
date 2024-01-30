#include <iostream>
#include <Windows.h>
#include <cmath> 
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    
    cout << "Вы открыли калькулятор, что вы хотите?\n1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n5. Возведение числа в степень\n6. Квадратный корень числа\n7. Процент от числа\n8. Факториал\n9. Выйти\n";

    int get,n1,n2;
    int fact = 1;
    cin >> get;

    while (get != 9) 
    {
            switch (get)
            {
            case 1:
                cout << "Введите два числа\n";
                cin >> n1;
                cin >> n2;

                cout << "Их сумма равна: " << n1 + n2 << "\n";
                break;
            case 2:
                cout << "Введите два числа\n";
                cin >> n1;
                cin >> n2;

                cout << "Их разность равна: " << n1 - n2 << "\n";
                break;
            case 3:
                cout << "Введите два числа\n";
                cin >> n1;
                cin >> n2;

                cout << "Их произведение равно: " << n1 * n2 << "\n";
                break;
            case 4:
                cout << "Введите два числа\n";
                cin >> n1;
                cin >> n2;

                cout << "Их честное равно: " << n1 / n2 << "\n";
                break;
            case 5:
                cout << "Введите число\n";
                cin >> n1;
                cout << "Введите степень числа\n";
                cin >> n2;

                cout << "Число в этой степени равно: " << pow(n1, n2) << "\n";
                break;
            case 6:
                cout << "Введите число\n";
                cin >> n1;

                cout << "Квадратный корень числа равен: " << sqrt(n1) << "\n";
                break;
            case 7:
                cout << "Введите число\n";
                cin >> n1;

                cout << "Процент от числа равен: " << n1 / 100.0 << "\n";
                break;
            case 8:
                cout << "Введите число\n";
                cin >> n1;
                for (int i = 1; i < n1 + 1; i++)
                {
                    fact = fact * i;
                }

                cout << "Факториал числа равен: " << fact << "\n";
                break;
            default:
                cout << "ERROR\n";
                break;
            }

        cout << "Введите новую цифру действия (ее число): ";
        cin >> get;
    }
}

