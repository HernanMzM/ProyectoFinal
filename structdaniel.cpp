#include <iostream>
#include <vector>

using namespace std;

struct Alumno {
  int id;
  string nombre;
  string apellido;
  float promedio;
};

vector<Alumno> alumnos;

void agregarAlumno() {
  Alumno nuevoAlumno;

  cout << "Ingrese el ID del alumno: ";
  cin >> nuevoAlumno.id;

  cout << "Ingrese el nombre del alumno: ";
  cin >> nuevoAlumno.nombre;

  cout << "Ingrese el apellido del alumno: ";
  cin >> nuevoAlumno.apellido;

  cout << "Ingrese el promedio del alumno: ";
  cin >> nuevoAlumno.promedio;

  alumnos.push_back(nuevoAlumno);

  cout << "Alumno agregado exitosamente!" << endl;
}

void mostrarAlumnos() {
  if (alumnos.empty()) {
    cout << "No hay alumnos registrados." << endl;
    return;
  }

  cout << "\nLista de alumnos:\n";
  for (Alumno alumno : alumnos) {
    cout << "ID: " << alumno.id << endl;
    cout << "Nombre: " << alumno.nombre << " " << alumno.apellido << endl;
    cout << "Promedio: " << alumno.promedio << endl;
    cout << "-------------------------\n";
  }
}

int main() {
  int opcion;

  do {
    cout << "\nMenu principal:\n";
    cout << "1. Agregar alumno\n";
    cout << "2. Mostrar alumnos\n";
    cout << "0. Salir\n";
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
      case 1:
        agregarAlumno();
        break;
      case 2:
        mostrarAlumnos();
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
