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
    return (0);
}