#include <iostream>

using namespace std;

int main()
{
  int age;
  float height, weight, bmi;
  string name;

  cout << "Digite seu nome: ";
  cin >> name;

  cout << name + ", digite sua idade: ";
  cin >> age;

  cout << name + ", digite seu peso (kg): ";
  cin >> weight;

  cout << name + ", digite sua altura (m): ";
  cin >> height;

  bmi = weight / (height * height);

  cout << "Seu IMC é " + to_string(bmi);

  return 0;
}
