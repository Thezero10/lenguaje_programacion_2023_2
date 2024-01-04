#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Ingrese numero 1: ";
    cin >> num1;
    cout << "Ingrese numero 2: ";
    cin >> num2;
    if (num2 == num1)
    {
        cout << "Ingrese numero 2: ";
        cin >> num2;
    }
    cout << "Ingrese numero 3: ";
    cin >> num3;
    if (num3 == num2 || num3 == num1)
    {
        cout << "Ingrese numero 3: ";
        cin >> num3;
    }
    if (num1 != num2 || num2 != num3 || num3 != num1)
    {
        if (num1 > num2)
        {
            if (num3 > num1)
            {
                cout << "El mayor numero es: " << num3 << endl;
                cout << "El menor numero es: " << num2 << endl;
            }
        }
        if (num2 > num3)
        {
            if (num1 > num2)
            {
                cout << "El mayor numero es: " << num1 << endl;
                cout << "El menor numero es: " << num3 << endl;
            }
        }
        if (num3 > num1)
        {
            if (num2 > num3)
            {
                cout << "El mayor numero es: " << num2 << endl;
                cout << "El menor numero es: " << num1 << endl;
            }
        }
    }
    cout << "llego aqui"<<endl;

    return 0;
}