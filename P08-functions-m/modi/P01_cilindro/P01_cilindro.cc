/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P01_cilindro.cc
  * @author Camila Valentina Alonso Yepez
  * @date 8/11/2023
  * @brief Hace el volumen de un cilindro haciendo uso de dos funciones
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>
#include <iomanip>

double Area(const float radio, const float pi = 3.141592653589793) {
  double area = pow (radio, 2) * pi;
  return area; 
}

double Volumen(const float radio, const float altura, const float pi = 3.141592653589793) {
  return (Area(radio, pi) * altura);
}

int main() {
  const float pi = 3.141592653589793;
  float radio;
  float altura;
  std::cin >> radio >> altura;
  double resultado = Volumen(radio, altura, pi);
  std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
  
}
