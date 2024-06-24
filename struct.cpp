#include <iostream>

struct Persona {
  std::string nombre;
  int edad;
  float altura;
};

int main() {
  Persona persona1;

  persona1.nombre = "Juan";
  persona1.edad = 30;
  persona1.altura = 1.75;

  std::cout << "Nombre: " << persona1.nombre << std::endl;
  std::cout << "Edad: " << persona1.edad << std::endl;
  std::cout << "Altura: " << persona1.altura << std::endl;

  return 0;
}
