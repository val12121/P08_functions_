/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P02_equilatero.cc
  * @author Camila Valentina Alonso Yepez
  * @date 8/11/2023
  * @brief Calcula el area de un triangulo equilatero dado un lado
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

double Equilatero(const float lado) {
  return (sqrt(3.0) * ((lado * lado) / 4.0));
}

int main() {
  float lado = 0;
  std::cin >> lado;
  std::cout << Equilatero(lado) << std::endl;
  return 0;
}
