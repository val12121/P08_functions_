#include <iostream>
#include <string>

bool Ordenada(const std::string& cadena) {
  for (int i = 0; i < cadena.size() - 1; i++) {
    if (cadena[i] > cadena[i + 1]) {
      return false;
    }  
  }
  return true;
}

void Combinando(std::string& cadena1, std::string& cadena2) {
  char ayuda = '~';
  int size1 = cadena1.size();
  int size2 = cadena2.size();
  cadena1 += ayuda;
  cadena2 += ayuda; 
}

int main() {

  std::string cadena1, cadena2;
  std::cin >> cadena1 >> cadena2; 
  if (Ordenada(cadena1) == true && Ordenada(cadena2) == true) {
    
  }

  return 0;
}
