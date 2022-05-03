#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("A");
    ClapTrap copied_a(a);
    ClapTrap c("C");
    ClapTrap substituted_c = c;

    std::cout << "~~ Fight of ClapTrap A ~~" << std::endl;
    a.attack("Alice");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(8);
    a.attack("Alice");
    a.takeDamage(8);
    std::cout << std::endl;

    std::cout << "~~ Fight of ClapTrap copied_a ~~" << std::endl;
    copied_a.attack("Bob");
    copied_a.takeDamage(9);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    copied_a.beRepaired(2);
    std::cout << std::endl;

    std::cout << "~~ Fight of ClapTrap C ~~" << std::endl;
    c.attack("Alice");
    c.takeDamage(5);
    c.beRepaired(3);
    c.takeDamage(8);
    c.attack("Alice");
    c.takeDamage(8);
    std::cout << std::endl;

    std::cout << "~~ Fight of ClapTrap substituted_c ~~" << std::endl;
    substituted_c.attack("Bob");
    substituted_c.takeDamage(9);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    substituted_c.beRepaired(2);
    return 0;
}
