#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    std::cout << "=== Test : constructeurs ===" << std::endl;
    FragTrap defaultFrag;
    FragTrap namedFrag("Sherif");
    FragTrap copyFrag(namedFrag);

    std::cout << "\n=== Test : fonctions de base ===" << std::endl;
    namedFrag.attack("Cowboy1");
    namedFrag.attack("Cowboy2");
    namedFrag.takeDamage(50);
    namedFrag.takeDamage(30);
    namedFrag.beRepaired(20);

    std::cout << "\n=== Test : High five ===" << std::endl;
    namedFrag.highFivesGuys();

    std::cout << "\n=== Test : un FragTrap mort ===" << std::endl;
    FragTrap deadFrag("deadFrag");
    deadFrag.takeDamage(100);

    std::cout << "\n=== Test : l'op d'assignation ===" << std::endl;
    FragTrap assignFrag;
    assignFrag = namedFrag;
    assignFrag.highFivesGuys();

    std::cout << "\n=== Test : d'out of energy ===" << std::endl;
    FragTrap energyTest("EnergyBot");
    int i;
    for (i = 0; i < 51; i++)
        energyTest.attack("Target");
    std::cout << "\n=== Fin des tests - Destruction des objets ===" << std::endl;
    return (0);
}