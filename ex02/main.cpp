#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "\n-- Constructors --" << std::endl;
    ClapTrap rick("Rick");
    ScavTrap morty("Morty");
    FragTrap abdo("Abdo");

    std::cout << "\n-- Copy and assignment --" << std::endl;
    FragTrap cloneAbdo(abdo);
    FragTrap anotherAbdo("Temp");
    anotherAbdo = abdo;

    std::cout << "\n-- Combat --" << std::endl;
    rick.attack(morty.getName());
    morty.takeDamage(rick.getAttackDamage());

    morty.attack(abdo.getName());
    abdo.takeDamage(morty.getAttackDamage());

    abdo.attack(rick.getName());
    rick.takeDamage(abdo.getAttackDamage());

    std::cout << "\n-- Special abilities --" << std::endl;
    morty.guardGate();
    abdo.highFivesGuys();

    std::cout << "\n-- Repairs --" << std::endl;
    morty.beRepaired(5);
    abdo.beRepaired(7);

    std::cout << "\n-- Final status --" << std::endl;
    std::cout << rick.getName() << " HP:" << rick.getHitPoints()
              << " EP:" << rick.getEnergyPoints()
              << " AD:" << rick.getAttackDamage() << std::endl;

    std::cout << morty.getName() << " HP:" << morty.getHitPoints()
              << " EP:" << morty.getEnergyPoints()
              << " AD:" << morty.getAttackDamage() << std::endl;

    std::cout << abdo.getName() << " HP:" << abdo.getHitPoints()
              << " EP:" << abdo.getEnergyPoints()
              << " AD:" << abdo.getAttackDamage() << std::endl;

    std::cout << cloneAbdo.getName() << " HP:" << cloneAbdo.getHitPoints()
              << " EP:" << cloneAbdo.getEnergyPoints()
              << " AD:" << cloneAbdo.getAttackDamage() << std::endl;

    std::cout << anotherAbdo.getName() << " HP:" << anotherAbdo.getHitPoints()
              << " EP:" << anotherAbdo.getEnergyPoints()
              << " AD:" << anotherAbdo.getAttackDamage() << std::endl;

    std::cout << "\n-- End of program (destructors called) --" << std::endl;
    return 0;
}
