#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &scavtrap);
    void guardGate();
    void attack(const std::string& target);
};

#endif
