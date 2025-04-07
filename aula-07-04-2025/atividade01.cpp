#include <iostream>

int main() {
  float num1, num2, avarage;

  std::cout << "Digite a sua primeira nota: ";
  std::cin >> num1;

  std::cout << "Digite a sua segunda nota: ";
  std::cin >> num2;

  avarage = (num1 + num2) / 2;

  std::cout << "Sua média foi: " << avarage << std::endl;

  return 0;
}