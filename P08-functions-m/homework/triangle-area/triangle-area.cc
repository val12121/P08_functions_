/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file triangle-area.cc
  * @author Camila Valentina Alonso Yepez
  * @date 8 Nov 2023
  * @brief Te hace el area de un triangulo y te dice si es un triangulo o no
  * @bug There are no known bugs
  * @see 
  */

bool IsAValidTriangle (double lado_a, double lado_b, double lado_c) {
  if (lado_a > lado_b + lado_c) {
    return false;
  } else if (lado_b > lado_a + lado_c) {
    return false;
  } else if (lado_c > lado_b + lado_a) {
    return false;
  } else {
    return true;
  }
}

#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
  double lado_a, lado_b, lado_c = 0.0;
  double perimetro = 0.0;
  double area = 0.0;
  std::cin >> lado_a >> lado_b >> lado_c;

  if (IsAValidTriangle(lado_a, lado_b, lado_c) == true ) {
  perimetro = (lado_a + lado_b + lado_c)/2;
  area = sqrt( perimetro * (perimetro - lado_a) * (perimetro - lado_b) * (perimetro - lado_c));
  std::cout << std::fixed << std::setprecision(2) << area << std::endl;
  }
  
}