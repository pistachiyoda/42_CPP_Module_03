#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "=== FragTrap constructor called. ===" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "=== FragTrap destructor called. ===" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
    std::cout << "=== FragTrap copy constructor called. ===" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << name_ << " is requesting High five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (!isActive())
        return ;
    energyPoints_ -= 1;
    std::cout << "FragTrap " << name_ << " attacks " << target << " causing " << attackDamage_ << " points of damage!" << std::endl;
    showStatus();
}
