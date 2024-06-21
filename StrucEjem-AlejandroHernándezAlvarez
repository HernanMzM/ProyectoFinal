#include <iostream>
#include <vector>

using namespace std;

struct Empleado {
    int id;
    string nombre;
    string apellido;
    float salario;
};

vector<Empleado> empleados;

void agregarEmpleado() {
    Empleado nuevoEmpleado;

    cout << "Ingrese el ID del empleado: ";
    cin >> nuevoEmpleado.id;

    cout << "Ingrese el nombre del empleado: ";
    cin >> nuevoEmpleado.nombre;

    cout << "Ingrese el apellido del empleado: ";
    cin >> nuevoEmpleado.apellido;

    cout << "Ingrese el salario del empleado: ";
    cin >> nuevoEmpleado.salario;

    empleados.push_back(nuevoEmpleado);

    cout << "Empleado agregado exitosamente!" << endl;
}

void mostrarEmpleados() {
    if (empleados.empty()) {
        cout << "No hay empleados registrados." << endl;
        return;
    }

    cout << "\nLista de empleados:\n";
    for (Empleado empleado : empleados) {
        cout << "ID: " << empleado.id << endl;
        cout << "Nombre: " << empleado.nombre << " " << empleado.apellido << endl;
        cout << "Salario: " << empleado.salario << endl;
        cout << "-------------------------\n";
    }
}

int main() {
    int opcion;

    do {
        cout << "\nMenu principal:\n";
        cout << "1. Agregar empleado\n";
        cout << "2. Mostrar empleados\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarEmpleado();
                break;
            case 2:
                mostrarEmpleados();
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 0);

    return 0;
}
