#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Diamond_clap_name"), ScavTrap(), FragTrap(), name_("Diamond"){
    this->hit_points_    = 100;  // FragTrap
    this->energy_points_ = 50;   // ScavTrap
    this->attack_damage_ = 30;   // FragTrap
    std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name_(name)
{
    this->hit_points_    = 100;  // FragTrap
    this->energy_points_ = 50;   // ScavTrap
    this->attack_damage_ = 30;   // FragTrap
    std::cout << "DiamondTrap " << name_ << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void){
    std::cout << "DiamondTrap destructor called with name: " << name_ << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & other) : ClapTrap("Diamond_clap_name"), ScavTrap(), FragTrap(){
    *this = other;
    std::cout << "DiamondTrap copy constructor called with name: "<< this->name_ << std::endl;
}

DiamondTrap &DiamondTrap::operator =(const DiamondTrap & other){

    if (this != &other)
    {
        this->ClapTrap::name_ = other.ClapTrap::name_;
        this->name_ = other.name_;
        this->hit_points_    = other.hit_points_;
        this->energy_points_ = other.energy_points_;
        this->attack_damage_ = other.attack_damage_;
        std::cout << "DiamondTrap assignement operator called" << std::endl;
    }
    return (*this);
}

void DiamondTrap::whoAmI(void){
    std::cout << "DiamondTrap name: "<< this->name_ << ", ClapTrap name: " << ClapTrap::name_ << std::endl;
}