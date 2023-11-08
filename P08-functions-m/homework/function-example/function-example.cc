/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file function-example.cc
  * @author Camila Valentina Alonso Yepez
  * @date 06 NOV 2023
  * @brief Al pasar tres parametros nos devuelve la ecuación resuelta.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

double Funcion(double variable_x, double variable_y, double variable_t) {

  double numerador{0.0};
  double denominador{0.0};
  double resultado{0.0};
  numerador = sqrt(2 * variable_t - 4);
  denominador = pow(variable_x, 2) - pow(variable_y, 2);
  resultado = numerador / denominador;

  return resultado;  
}

int main() {

  int variable_x{0};
  int variable_y{0};
  int variable_t{0};

  std::cin >> variable_x >> variable_y >> variable_t;  
  std::cout << Funcion(variable_x, variable_y, variable_t) << std::endl;

}
