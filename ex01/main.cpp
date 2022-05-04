#include "ScavTrap.hpp"

int main()
{
    std::cout << "~~ Generate ScavTrap A ~~" << std::endl;
    ScavTrap a("A");
    std::cout << std::endl;
    std::cout << "~~ Generate copied ScavTrap A by copy constructor ~~" << std::endl;
    ScavTrap copied_a(a);
    std::cout << std::endl;
    std::cout << "~~ Generate ScavTrap C ~~" << std::endl;
    ScavTrap c("C");
    std::cout << std::endl;

    std::cout << "~~ Fight of ScavTrap A ~~" << std::endl;
    a.showStatus();
    a.guardGate();
    a.attack("Alice");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(8);
    a.attack("Alice");
    a.takeDamage(8);
    std::cout << std::endl;

    std::cout << "~~ Fight of ScavTrap copied_a ~~" << std::endl;
    copied_a.showStatus();
    copied_a.guardGate();
    copied_a.attack("Bob");
    copied_a.takeDamage(9);
    for (int i = 0; i < 50; i++)
    {
        copied_a.beRepaired(1);
    }
    std::cout << std::endl;

    std::cout << "~~ Fight of ScavTrap C ~~" << std::endl;
    c.showStatus();
    c.attack("Alice");
    c.takeDamage(5);
    c.beRepaired(3);
    c.showStatus();
    std::cout << std::endl;

    std::cout << "~~ Generate copied ScavTrap C by = operator. ~~" << std::endl;
    ScavTrap substituted_c("X");
    substituted_c = c;
    std::cout << std::endl;

    std::cout << "~~ Fight of ScavTrap substituted_c ~~" << std::endl;
    substituted_c.showStatus();
    substituted_c.guardGate();
    substituted_c.attack("Bob");
    substituted_c.takeDamage(9);
    substituted_c.beRepaired(2);
    std::cout << std::endl;
    return 0;
}
