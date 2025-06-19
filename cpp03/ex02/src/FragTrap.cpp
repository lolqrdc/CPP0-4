#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "Default";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << this->_name << " FragTrap is built 🔨" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << this->_name << " FragTrap is built 🔨" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap()
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    std::cout << this->_name << " FragTrap copy is built 🔨" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap& set)
{
    if (this != &set)
    {
        this->_name = set._name;
        this->_hitPoints = set._hitPoints;
        this->_energyPoints = set._energyPoints;
        this->_attackDamage = set._attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << this->_name << " FragTrap is destructed 🪓" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "YEY! Can FragTrap give you a high five? 🙌" << std::endl;
}