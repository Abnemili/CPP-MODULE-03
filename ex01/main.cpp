#include "ScavTrap.hpp"

int main() {
    // Construct two ScavTraps
    ScavTrap s1("Alpha");
    ScavTrap s2("Beta");

    std::cout << "\n-- Before assignment --" << std::endl;
    std::cout << s1.getName() << " HP:" << s1.getHitPoints()
              << " EP:" << s1.getEnergyPoints()
              << " AD:" << s1.getAttackDamage() << std::endl;

    std::cout << s2.getName() << " HP:" << s2.getHitPoints()
              << " EP:" << s2.getEnergyPoints()
              << " AD:" << s2.getAttackDamage() << std::endl;

    // Assignment operator: s1 = s2
    s1 = s2;

    std::cout << "\n-- After assignment --" << std::endl;
    std::cout << s1.getName() << " HP:" << s1.getHitPoints()
              << " EP:" << s1.getEnergyPoints()
              << " AD:" << s1.getAttackDamage() << std::endl;

    std::cout << s2.getName() << " HP:" << s2.getHitPoints()
              << " EP:" << s2.getEnergyPoints()
              << " AD:" << s2.getAttackDamage() << std::endl;

    return 0;
}
