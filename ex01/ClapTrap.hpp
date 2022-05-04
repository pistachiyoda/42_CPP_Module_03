#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>

class ClapTrap
{
protected:
    std::string name_;
    unsigned int hitPoints_;
    unsigned int energyPoints_;
    unsigned int attackDamage_;
    bool isActive();
public:
    ClapTrap(std::string name, int hp = 10, int ep = 10, int ad = 0);
    ~ClapTrap();
    ClapTrap(const ClapTrap &claptrap);
    ClapTrap &operator=(const ClapTrap &claptrap);
    std::string getName() const;
    unsigned int getHitPoint() const;
    unsigned int getEnergyPoint() const;
    unsigned int getAttackDamage() const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void showStatus();
};

#endif
