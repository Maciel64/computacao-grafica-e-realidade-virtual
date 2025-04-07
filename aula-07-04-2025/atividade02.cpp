#include <iostream>

using namespace std;

int main() {
  float height, weight, result;

  cout << "Qual sua altura? (m): ";
  cin >> height;

  cout << "Qual o seu peso? (kg): ";
  cin >> weight;

  result = weight / (height * height);

  cout << "O seu IMC é: " << result << endl;

  
  return 0;
}