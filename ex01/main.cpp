#include "ScavTrap.hpp"

int main(void)
{
std::cout << "--- Construction ---" << std::endl;
ScavTrap a("Serena");
ScavTrap b;

std::cout << "--- Actions ---" << std::endl;
a.attack("Bob");
a.takeDamage(30);
a.beRepaired(10);
a.guardGate();

std::cout << "--- Copie ---" << std::endl;
ScavTrap c(a);
b = a;
c.attack("Alice");

std::cout << "--- Destruction ---" << std::endl;
return 0;
}