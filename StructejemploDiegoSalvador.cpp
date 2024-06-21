#include <iostream>
using namespace std;

struct Persona {
    char nombre;
    int edad;
    float salario;
};

int main() {
    Persona p1; 

    cout << "Ingrese nombre: ";
    cin >> p1.nombre;
    cout << "Ingrese edad: ";
    cin >> p1.edad;
    cout << "Ingrese salario: ";
    cin >> p1.salario;

    cout << "\nDatos de la persona:" << endl;
    cout << "Nombre: " << p1.nombre << endl;
    cout << "Edad: " << p1.edad << endl;
    cout << "Salario: " << p1.salario << endl;

    return 0;
}
