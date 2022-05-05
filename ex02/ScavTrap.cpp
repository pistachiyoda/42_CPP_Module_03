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

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
    std::cout << "=== Copy assignment operator called ===" << std::endl;
    name_ = scavtrap.getName();
    hitPoints_ = scavtrap.getHitPoint();
    energyPoints_ = scavtrap.getEnergyPoint();
    attackDamage_ =  scavtrap.getAttackDamage();
    std::cout << name_ << " is generated." << std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << name_ << " is now in Gate keeper mode." << std::endl;
    std::cout << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!isActive())
        return ;
    energyPoints_ -= 1;
    std::cout << "ScavTrap " << name_ << " attacks " << target << " causing " << attackDamage_ << " points of damage!" << std::endl;
    showStatus();
}
