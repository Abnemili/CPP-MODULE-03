#include "ClapTrap.hpp"

int main() {
	ClapTrap a("dahira");
	ClapTrap b("khribi9");

	std::cout << "\n-- Initial status --" << std::endl;
	std::cout << a.getName() << " HP:" << a.getHitPoints() << " EP:" << a.getEnergyPoints() << " AD:" << a.getAttackDamage() << std::endl;
	std::cout << b.getName() << " HP:" << b.getHitPoints() << " EP:" << b.getEnergyPoints() << " AD:" << b.getAttackDamage() << std::endl;

	ClapTrap c = a; // copy
	ClapTrap d; d = b; // assignment

	std::cout << "\n-- Combat --" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	b.beRepaired(5);

	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());

	std::cout << "\n-- Drain energy (dahira attacks repeatedly) --" << std::endl;
	for (int i = 0; i < 11; ++i)
		a.attack("training-dummy");

	a.beRepaired(2);

	std::cout << "\n-- Final status --" << std::endl;
	std::cout << a.getName() << " HP:" << a.getHitPoints() << " EP:" << a.getEnergyPoints() << " AD:" << a.getAttackDamage() << std::endl;
	std::cout << b.getName() << " HP:" << b.getHitPoints() << " EP:" << b.getEnergyPoints() << " AD:" << b.getAttackDamage() << std::endl;

	return 0;
}