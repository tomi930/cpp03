#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap jinx("Jinx");
    ClapTrap vi("Vi");

    jinx.attack("vi");
    vi.attack("jinx");
    jinx.takeDamage(1);
    vi.takeDamage(1090);
    jinx.beRepaired(10);
    vi.beRepaired(1080);

    std::cout << "--- Energy exhaustion ---" << std::endl;
    ClapTrap ekko("Ekko");
    for (int i = 0; i < 11; i++)
        ekko.attack("a training dummy");
    ekko.beRepaired(5);
    return (0);
}
