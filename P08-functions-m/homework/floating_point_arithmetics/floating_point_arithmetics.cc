/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file floating_point_arithmetics.cc
  * @author Camila Valentina Alonso Yepez
  * @date 08 Nov 2023
  * @brief Te dice si la diferencia entre dos números es mayor a 1e-7
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
  long double resultado;
  if (number1 > number2) {
    resultado = number1 - number2;
    if (resultado < epsilon) {
      return true;
    } else {
      return false;
    }
  } else {
    resultado = number2 - number1;
    if (resultado < epsilon) {
      return true;
    } else {
      return false;
    }
  }
}

int main() {
  double numero1, numero2 = 0;
  std::cin >> numero1 >> numero2;
  std::cout << AreEqual(numero1, numero2, 1e-7) << std::endl; 
}