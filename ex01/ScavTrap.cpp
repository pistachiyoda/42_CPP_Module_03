#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "=== ScavTrap constructor called. ===" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "=== ScavTrap destructor called. ===" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
    std::cout << "=== ScavTrap copy constructor called. ===" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << name_ << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!isActive())
        return ;
    energyPoints_ -= 1;
    std::cout << "ScavTrap " << name_ << " attacks " << target << " causing " << attackDamage_ << " points of damage!" << std::endl;
    showStatus();
}
