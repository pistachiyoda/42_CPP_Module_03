#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap s("S");
    ScavTrap _s2("S2");
    ScavTrap s2(_s2);
    ScavTrap _s3("S3");
    ScavTrap s3 = _s3;

    std::cout << "~~ Fight of ScavTrap S ~~" << std::endl;
    s.guardGate();
    s.attack("Alice");
    s.takeDamage(5);
    s.beRepaired(3);
    s.takeDamage(8);
    s.attack("Alice");
    s.takeDamage(8);
    std::cout << std::endl;

    std::cout << "~~ Fight of ClapTrap S2 ~~" << std::endl;
    s.guardGate();
    s2.attack("Bob");
    s2.takeDamage(9);
    s2.beRepaired(2);
    s2.beRepaired(2);
    s2.beRepaired(2);
    s2.beRepaired(2);
    s2.beRepaired(2);
    s2.beRepaired(2);
    s2.beRepaired(2);
    s2.beRepaired(2);
    s2.beRepaired(2);
    s2.beRepaired(2);
    std::cout << std::endl;

    std::cout << "~~ Fight of ClapTrap S3 ~~" << std::endl;
    s.guardGate();
    s3.attack("Bob");
    s3.takeDamage(9);
    s3.beRepaired(2);
    s3.beRepaired(2);
    s3.beRepaired(2);
    s3.beRepaired(2);
    s3.beRepaired(2);
    s3.beRepaired(2);
    s3.beRepaired(2);
    s3.beRepaired(2);
    s3.beRepaired(2);
    s3.beRepaired(2);
    std::cout << std::endl;
    return 0;
}
