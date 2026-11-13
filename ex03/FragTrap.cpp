#include "FragTrap.hpp"

FragTrap::FragTrap(void){
    this->hit_points_ = 100;
    this->energy_points_ = 100;
    this->attack_damage_ = 30;
    std::cout << "FragTrap default constructor called" << std::endl;    
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap destructor called with name: " << this->name_ << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->hit_points_ = 100;
    this->energy_points_ = 100;
    this->attack_damage_ = 30;
    std::cout << "FragTrap constructor called with name: " << this->name_ << std::endl;
}

FragTrap::FragTrap(const FragTrap & other) : ClapTrap(other){
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator =(const FragTrap & other){
    this->hit_points_ = other.hit_points_;
    this->energy_points_ = other.energy_points_;
    this->attack_damage_ = other.attack_damage_;
    this->name_ = other.name_;
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return (*this);
}

void FragTrap::highFiveGuys(void){
    std::cout << "FragTrap " << this->name_ << ": High Five Guys!!!" << std::endl;
}