/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file change-case.cc
  * @author Camila Valentina Alonso Yepez
  * @date 8 Nov 2023
  * @brief Toma una palabra y te convierte las letras minúsculas a 
  * mayúsculas y viceversa
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <string>
int main() {

  std::string palabra;
  std::cin >> palabra;
  for (int i = 0; i < palabra.size(); i++) {
    if (palabra[i] < 92) {
      palabra[i] = palabra[i] + 32;
    } else {
      palabra[i] = palabra[i] - 32;
    }
  }
  std::cout << palabra << std::endl;

}
