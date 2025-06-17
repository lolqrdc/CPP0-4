/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:41:15 by lolq              #+#    #+#             */
/*   Updated: 2025/06/17 10:45:07 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name = "Default";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << this->_name << " ScavTrap is constructed 🔨" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << this->_name << " ScavTrap is constructed 🔨" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap()
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    std::cout << this->_name << " ScavTrap copy is constructed 🔨" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& set)
{
    if (this != &set)
    {
        this->_name = set._name;
        this->_hitPoints = set._hitPoints;
        this->_attackDamage = set._attackDamage;
        this->_energyPoints = set._energyPoints;
    }
    std::cout << "Copy assignement constructor called 🔨" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << this->_name << " ScavTrap destructor called 🪓" << std::endl;
}

// Methodes 
void    ScavTrap::guardGate()
{
    if (this->_hitPoints == 0)
        std::cout << this->_name << " ScavTrap can't guard because he is dead!" << std::endl;
    else
        std::cout << this->_name << " ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hitPoints == 0)
        std::cout << this->_name << " ScavTrap can't attack, he is dead!" << std::endl;
    else if (this->_energyPoints == 0)
        std::cout << this->_name << " ScavTrap can't attack to " << target << " because out of energy." << std::endl;
    else
    {
        std::cout << this->_name << " ScavTrap attack " << target << ", causing " << this->_attackDamage << " damage!" << std::endl;
        return ;
    }
}
