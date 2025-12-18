#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
        
        public:
                FragTrap();
                FragTrap(std::string const & name);
                FragTrap(FragTrap const & other);
                FragTrap & operator=(FragTrap const & other);
                ~FragTrap();
                void highFivesGuys();
};


#endif 