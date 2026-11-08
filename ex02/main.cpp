#include "FragTrap.hpp"

int main(void)
{
	std::cout << "--- Construction ---" << std::endl;
	FragTrap a("Fraggy");
	FragTrap b;

	std::cout << "--- Actions ---" << std::endl;
	a.attack("Bob");
	a.takeDamage(40);
	a.beRepaired(20);
	a.highFiveGuys();

	std::cout << "--- Copy ---" << std::endl;
	FragTrap c(a);
	b = a;
	c.highFiveGuys();

	std::cout << "--- Destruction ---" << std::endl;
	return 0;
}
