#include "ClapTrap.hpp"

int main() {


    std::cout << "\n-- Constructors --" << std::endl;

    ClapTrap rick("Rick");
    ClapTrap morty("Morty");
    ClapTrap abdo("Abdo");



    std::cout << "\n-- Copy and assignment --" << std::endl;
    ClapTrap cloneRick(rick);
    ClapTrap cloneMorty; 
    cloneMorty = morty;



    std::cout << "\n-- Combat --" << std::endl;
    rick.attack(morty.getName());
    morty.takeDamage(rick.getAttackDamage());

    morty.attack(abdo.getName());
    abdo.takeDamage(morty.getAttackDamage());

    abdo.attack(rick.getName());
    rick.takeDamage(abdo.getAttackDamage());

    std::cout << "\n-- Repairs --" << std::endl;
    morty.beRepaired(4);
    abdo.beRepaired(2);

    

    std::cout << "\n-- Energy status test (Rick attacks repeatedly) --" << std::endl;
    for (int i = 0; i < 11; ++i)
        rick.attack(" l3ibad ");

    rick.beRepaired(3);

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

    std::cout << cloneRick.getName() << " HP:" << cloneRick.getHitPoints()
              << " EP:" << cloneRick.getEnergyPoints()
              << " AD:" << cloneRick.getAttackDamage() << std::endl;

    std::cout << cloneMorty.getName() << " HP:" << cloneMorty.getHitPoints()
              << " EP:" << cloneMorty.getEnergyPoints()
              << " AD:" << cloneMorty.getAttackDamage() << std::endl;

    std::cout << "\n-- End of program (destructors called) --" << std::endl;
    return 0;
}
