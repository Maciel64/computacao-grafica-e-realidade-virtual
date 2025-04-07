#include <iostream>

using namespace std;

int main() {
  float celcius, farenheit;

  cout << "Digite a temperatura em Celcius: ";
  cin >> celcius;

  farenheit = (celcius * 9/5) + 32;

  cout << celcius << "ºC são " << farenheit << "ºF" << endl;

  return 0;
}