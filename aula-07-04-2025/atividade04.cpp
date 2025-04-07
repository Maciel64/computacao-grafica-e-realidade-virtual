#include <iostream>

using namespace std;

int main() {
  float base, height, area;

  cout << "Digite a base do triângulo: ";
  cin >> base;

  cout << "Digite a altura do triângulo: ";
  cin >> height;

  area = base * height / 2;

  cout << "A área do triângulo é " << area << "m²" << endl;
  
  return 0;
}