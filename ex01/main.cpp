#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

    std::cout << "\n-- Constructors --" << std::endl;
    ClapTrap rick("Rick");
    ClapTrap morty("Morty");
    ScavTrap abdo("Abdo");


    std::cout << "\n-- Copy and assignment --" << std::endl;
    ScavTrap cloneAbdo(abdo);
    ScavTrap anotherAbdo("Temp");
    anotherAbdo = abdo;



    std::cout << "\n-- Combat --" << std::endl;
    rick.attack(morty.getName());
    morty.takeDamage(rick.getAttackDamage());

    abdo.attack(rick.getName());
    rick.takeDamage(abdo.getAttackDamage());

    morty.attack(abdo.getName());
    abdo.takeDamage(morty.getAttackDamage());



    std::cout << "\n-- Special ability --" << std::endl;
    abdo.guardGate();

    

    std::cout << "\n-- Repairs --" << std::endl;
    morty.beRepaired(4);
    abdo.beRepaired(3);




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
