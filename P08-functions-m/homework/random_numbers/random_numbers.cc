/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file random_numbers.cc
  * @author Camila Valentina Alonso Yepez
  * @date  8 Nov 2023
  * @brief Genera un número aleatorio en un intervalo [n, m]
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cstdlib>
int Random(int n, int m) {
  int numero_aleatorio = (1 + std::rand() % n-m) + m;
  return numero_aleatorio;
}

int main() {
  srand (time(0));
  int n, m = 0;
  std::cin >> n >> m;
  std::cout << Random(n, m) << std::endl;
}