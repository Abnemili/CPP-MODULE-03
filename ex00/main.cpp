#include "ClapTrap.hpp"

int main() {
    ClapTrap a("dahira"); // parameterized constructor creat a ClapTrap named dahira
    ClapTrap b("khribi9"); // parameterized constructor creat a ClapTrap named khribi9

    std::cout << "\n-- Combat --" << std::endl;
    a.attack("khribi9"); // 
    b.takeDamage(a.getAttackDamage());

    b.attack("dahira");
    a.takeDamage(b.getAttackDamage());

    std::cout << "\n-- Final status --" << std::endl;
    std::cout << a.getName() << " HP:" << a.getHitPoints() 
              << " EP:" << a.getEnergyPoints() 
              << " AD:" << a.getAttackDamage() << std::endl;

    std::cout << b.getName() << " HP:" << b.getHitPoints() 
              << " EP:" << b.getEnergyPoints() 
              << " AD:" << b.getAttackDamage() << std::endl;

    return 0;
}
