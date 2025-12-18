#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap() {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " default constructor called" << std::endl;
} 


FragTrap::FragTrap(std::string const & name) : ScavTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & other) : ScavTrap(other) {
    std::cout << "FragTrap " << this->name << " copy constructor called" << std::endl;
}


FragTrap & FragTrap::operator=(FragTrap const & other) {
    if (this != &other) {
        ScavTrap::operator=(other);
    }
    std::cout << "FragTrap " << this->name << " copy assignment operator called" << std::endl;
    return *this;
}


FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}


void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " is requesting a high five! ✋" << std::endl;
}
