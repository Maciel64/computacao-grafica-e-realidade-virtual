#include <iostream>

namespace Amigo1
{
  void ola()
  {
    std::cout << "Olá, sou amigo 1\n";
  }
}

namespace Amigo2
{
  void ola()
  {
    std::cout << "Olá, sou amigo 2\n";
  }
}

int main()
{
  Amigo1::ola();
  Amigo2::ola();
}