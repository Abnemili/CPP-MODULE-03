#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " default constructor called" << std::endl;
} 

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & other) : ClapTrap(other) {
    std::cout << "ScavTrap " << this->name << " copy constructor called" << std::endl;
}


ScavTrap & ScavTrap::operator=(ScavTrap const & other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << this->name << " copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}


void ScavTrap::attack(const std::string & target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << name << " has insufficient energy or hit points to attack." << std::endl;
    }
}


void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}
