#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{

    private:
        std::string name_;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap & other);
        ~DiamondTrap();
        DiamondTrap &operator =(const DiamondTrap & other);
        void whoAmI(void);
        using ScavTrap::attack;
};

#endif

