#include "ClapTrap.hpp"
#include <climits>

ClapTrap::ClapTrap(void) : name_("Default"), hit_points_(10), energy_points_(10), attack_damage_(0){
    std::cout << "ClapTrap default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0){
    std::cout << "ClapTrap constructor called with name: " << name_  << std::endl;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap destructor called with name: " << name_  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other){
    *this = other;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap & other){
    this->name_ = other.name_;
    this->hit_points_ = other.hit_points_;
    this->energy_points_ = other.energy_points_;
    this->attack_damage_ = other.attack_damage_;
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    if (this->energy_points_ <= 0 || this->hit_points_ <= 0){
        std::cout << "ClapTrap " << this->name_ << " has no energy or hit points left to attack!" << std::endl;
        return ;
    }
    this->energy_points_--;
    std::cout << "ClapTrap " << this->name_ << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hit_points_ <= 0){
        std::cout << "ClapTrap " << this->name_ << " has no hit points left to take damage!" << std::endl;
        return ;
    }
    if (amount >= (unsigned int)this->hit_points_)
        this->hit_points_ = 0;
    else
        this->hit_points_ -= amount;
    std::cout << "ClapTrap " << this->name_ << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->energy_points_ <= 0 || this->hit_points_ <= 0){
        std::cout << "ClapTrap " << this->name_ << " has no energy or hit points left to be repaired!" << std::endl;
        return ;
    }
    this->energy_points_--;
    if (amount > (unsigned int)(INT_MAX - this->hit_points_))
        this->hit_points_ = INT_MAX;
    else
        this->hit_points_ += amount;
    std::cout << "ClapTrap " << this->name_ << " is repaired for " << amount << " points!" << std::endl;
}
