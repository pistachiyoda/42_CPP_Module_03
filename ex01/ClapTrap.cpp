#include "ClapTrap.hpp"

ClapTrap::ClapTrap(
    std::string name,
    int hp,
    int ep,
    int ad
) : name_(name), hitPoints_(hp), energyPoints_(ep), attackDamage_(ad)
{
    std::cout << "=== ClapTrap constructor called. ===" << std::endl;
    std::cout << name_ << " is generated." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "=== ClapTrap destructor called. ===" << std::endl;
    std::cout << name_ << " is deleted." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "=== ClapTrap copy constructor called. ===" << std::endl;
    *this = claptrap;
    std::cout << "ClapTrap " << name_ << " is generated." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
    std::cout << "=== Copy assignment operator called ===" << std::endl;
    name_ = claptrap.getName();
    hitPoints_ = claptrap.getHitPoint();
    energyPoints_ = claptrap.getEnergyPoint();
    attackDamage_ =  claptrap.getAttackDamage();
    std::cout << name_ << " is generated." << std::endl;
    return *this;
}

std::string ClapTrap::getName() const
{
    return name_;
}

unsigned int ClapTrap::getHitPoint() const
{
    return hitPoints_;
}

unsigned int ClapTrap::getEnergyPoint() const
{
    return energyPoints_;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return attackDamage_;
}

bool ClapTrap::isActive()
{
    if (energyPoints_ <= 0)
    {
        std::cout << "Can’t do anything... because Energy point is 0." << std::endl;
        std::cout << std::endl;
        return false;
    }
    else if (hitPoints_ <= 0)
    {
        std::cout << "Can’t do anything... because Hit points is 0." << std::endl;
        std::cout << std::endl;
        return false;
    }
    return true;
}

void ClapTrap::showStatus()
{
    std::cout << "[Current status]" << std::endl;
    std::cout << std::setw(17) << "Hit Point: " << hitPoints_ << std::endl;
    std::cout << std::setw(17) << "Energy Point: " << energyPoints_ << std::endl;
    std::cout << std::endl;
}

// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
// Attacking cost 1 energy point.
// Can’t do anything if it has no hit points or energy points left.
void ClapTrap::attack(const std::string& target)
{
    if (!isActive())
        return ;
    energyPoints_ -= 1;
    std::cout << "ClapTrap " << name_ << " attacks " << target << " causing " << attackDamage_ << " points of damage!" << std::endl;
    showStatus();
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name_ << " is attacked, causing " << amount << " points of damage!" << std::endl;
    if (hitPoints_ <= amount)
    {
        hitPoints_ = 0;
        std::cout << "Hit points is 0 ..." << std::endl;
    }
    else
        hitPoints_ -= amount;
    showStatus();
}

// When ClapTrap repairs itself, it gets <amount> hit points back.
// Repairing cost 1 energy point.
// Can’t do anything if it has no hit points or energy points left.
void ClapTrap::beRepaired(unsigned int amount)
{
    if (!isActive())
        return ;
    energyPoints_ -= 1;
    hitPoints_ += amount;
    std::cout << "ClapTrap " << name_ << " is repaired " << amount << " points!" << std::endl;
    showStatus();
}
