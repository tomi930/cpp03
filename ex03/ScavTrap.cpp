#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
    this->hit_points_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->hit_points_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;
    std::cout << "ScavTrap constructor called with name: "<< this->name_ << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator =(const ScavTrap & other){
    this->hit_points_ = other.hit_points_;
    this->energy_points_ = other.energy_points_;
    this->attack_damage_ = other.attack_damage_;
    this->name_ = other.name_;
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return (*this);
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap "<< this->name_ <<" is now in Gatekeeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->energy_points_ <= 0 || this->hit_points_ <= 0){
        std::cout << "ScavTrap " << this->name_ << " has no energy or hit points left to attack!" << std::endl;
        return ;
    }
    this->energy_points_--;
    std::cout << "ScavTrap " << this->name_ << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;
}