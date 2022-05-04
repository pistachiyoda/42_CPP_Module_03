#include "FragTrap.hpp"

int main()
{
    std::cout << "~~ Generate FragTrap A ~~" << std::endl;
    FragTrap a("A");
    std::cout << std::endl;
    std::cout << "~~ Generate copied FragTrap A by copy constructor ~~" << std::endl;
    FragTrap copied_a(a);
    std::cout << std::endl;
    std::cout << "~~ Generate FragTrap C ~~" << std::endl;
    FragTrap c("C");
    std::cout << std::endl;

    std::cout << "~~ Fight of FragTrap A ~~" << std::endl;
    a.showStatus();
    a.highFivesGuys();
    a.attack("Alice");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(8);
    a.attack("Alice");
    a.takeDamage(8);
    std::cout << std::endl;

    std::cout << "~~ Fight of FragTrap copied_a ~~" << std::endl;
    copied_a.showStatus();
    copied_a.highFivesGuys();
    copied_a.attack("Bob");
    copied_a.takeDamage(9);
    for (int i = 0; i < 100; i++)
    {
        copied_a.beRepaired(1);
    }
    std::cout << std::endl;

    std::cout << "~~ Fight of FragTrap C ~~" << std::endl;
    c.showStatus();
    c.attack("Alice");
    c.takeDamage(5);
    c.beRepaired(3);
    c.showStatus();
    std::cout << std::endl;

    std::cout << "~~ Generate copied FragTrap C by = operator. ~~" << std::endl;
    FragTrap substituted_c("X");
    substituted_c = c;
    std::cout << std::endl;

    std::cout << "~~ Fight of FragTrap substituted_c ~~" << std::endl;
    substituted_c.showStatus();
    substituted_c.highFivesGuys();
    substituted_c.attack("Bob");
    substituted_c.takeDamage(9);
    substituted_c.beRepaired(2);
    std::cout << std::endl;
    return 0;
}
