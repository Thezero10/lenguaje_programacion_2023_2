#include <iostream>
using namespace std;

int main() {//Fabian Sangama
    float nota1, nota2, nota3, promedio;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    promedio = (nota1 * 0.15) + (nota2 * 0.35) + (nota3 * 0.50);

    cout << "El promedio del estudiante es: " << promedio << endl;

    return 0;
}
