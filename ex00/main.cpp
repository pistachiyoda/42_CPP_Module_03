#include "ClapTrap.hpp"

int main()
{
    std::cout << "~~ Generate ClapTrap A ~~" << std::endl;
    ClapTrap a("A");
    std::cout << std::endl;
    std::cout << "~~ Generate copied ClapTrap A by copy constructor ~~" << std::endl;
    ClapTrap copied_a(a);
    std::cout << std::endl;
    std::cout << "~~ Generate ClapTrap C ~~" << std::endl;
    ClapTrap c("C");
    std::cout << std::endl;

    std::cout << "~~ Fight of ClapTrap A ~~" << std::endl;
    a.showStatus();
    a.attack("Alice");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(8);
    a.attack("Alice");
    a.takeDamage(8);
    std::cout << std::endl;

    std::cout << "~~ Fight of ClapTrap copied_a ~~" << std::endl;
    copied_a.showStatus();
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
    c.showStatus();
    c.attack("Alice");
    c.takeDamage(5);
    c.beRepaired(3);
    c.showStatus();
    std::cout << std::endl;

    std::cout << "~~ Generate copied ClapTrap C by = operator. ~~" << std::endl;
    ClapTrap substituted_c("X");
    substituted_c = c;
    std::cout << std::endl;

    std::cout << "~~ Fight of ClapTrap substituted_c ~~" << std::endl;
    substituted_c.showStatus();
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
    std::cout << std::endl;
    return 0;
}
