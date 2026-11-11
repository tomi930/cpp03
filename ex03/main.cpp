#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "--- Construction (ClapTrap must appear only once) ---" << std::endl;
	DiamondTrap a("Gem");
	DiamondTrap b;

	std::cout << std::endl << "--- whoAmI ---" << std::endl;
	a.whoAmI();
	b.whoAmI();

	std::cout << std::endl << "--- Inherited actions ---" << std::endl;
	a.attack("Bob");          // ScavTrap's attack, 30 damage (FragTrap)
	a.takeDamage(40);
	a.beRepaired(20);
	a.guardGate();            // from ScavTrap
	a.highFiveGuys();         // from FragTrap

	std::cout << std::endl << "--- Copy constructor ---" << std::endl;
	DiamondTrap c(a);
	c.whoAmI();

	std::cout << std::endl << "--- Assignment operator ---" << std::endl;
	b = a;
	b.whoAmI();

	std::cout << std::endl << "--- Running out of energy (50 energy points) ---" << std::endl;
	DiamondTrap tired("Tired");
	for (int i = 0; i < 50; i++)
		tired.attack("dummy");
	tired.attack("dummy");    // should fail: no energy left
	tired.beRepaired(10);     // should fail too

	std::cout << std::endl << "--- Out of hit points ---" << std::endl;
	DiamondTrap dead("Dead");
	dead.takeDamage(1000);
	dead.attack("anyone");    // should fail: no hit points left
	dead.beRepaired(10);      // should fail too

	std::cout << std::endl << "--- Destruction ---" << std::endl;
	return 0;
}
