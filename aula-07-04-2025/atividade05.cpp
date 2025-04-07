#include <iostream>

using namespace std;

int main() {
  int days, years;

  cout << "Digite sua idade: ";
  cin >> years;

  days = years * 365;

  cout << "Você tem " << days << " de vida\n";

  return 0;
}