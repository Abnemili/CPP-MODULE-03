#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " constructed with default values." << std::endl;
} // --> Default constructor it wontbe used in this ex00


ClapTrap::ClapTrap(std::string const & name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " constructed." << std::endl;
} // --> Parameterized constructor

ClapTrap::ClapTrap(ClapTrap const & other)  : name(other.name), hitPoints(other.hitPoints),
                                             energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "ClapTrap " << name << " copy constructed." << std::endl;
} // --> Copy constructor

ClapTrap & ClapTrap::operator=(ClapTrap const & other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " assigned." << std::endl;
    return *this;
} // --> Copy assignment operator

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destructed." << std::endl;
} // --> Destructor

void ClapTrap::attack(const std::string & target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has insufficient energy or hit points to attack." << std::endl;
    }
} // --> attack method


void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= amount) {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is now destroyed!" << std::endl;
    } else {
        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage, remaining hit points: " << hitPoints << "." << std::endl;
    }
} // --> takeDamage method


void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount
                  << " points, new hit points: " << hitPoints << "." << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has insufficient energy or hit points to be repaired." << std::endl;
    }
} // --> beRepaired method


std::string ClapTrap::getName() const {
    return name;
} // --> getName method

unsigned int ClapTrap::getHitPoints() const {
    return hitPoints;
} // --> getHitPoints method

unsigned int ClapTrap::getEnergyPoints() const {
    return energyPoints;
} // --> getEnergyPoints method

unsigned int ClapTrap::getAttackDamage() const {
    return attackDamage;
} // --> getAttackDamage method

