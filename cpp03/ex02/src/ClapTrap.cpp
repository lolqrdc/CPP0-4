/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:54:50 by lolq              #+#    #+#             */
/*   Updated: 2025/06/19 10:23:30 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructeur & destructeur
ClapTrap::ClapTrap()
{
    this->_name = "Default";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << this->_name << " ClapTrap is constructed" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << this->_name << " ClapTrap is constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    std::cout << this->_name << "ClapTrap copy constructed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& op)
{
    if (this != &op)
    {
        this->_name = op._name;
        this->_hitPoints = op._hitPoints;
        this->_energyPoints = op._energyPoints;
        this->_attackDamage = op._attackDamage;
    }
    std::cout << "Copy assignment constructor called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " ClapTrap destructor called" << std::endl;
}

// Methodes
void ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoints == 0)
        std::cout << this->_name << " ClapTrap can't attack, he is dead!" << std::endl;
    else if (this->_energyPoints == 0)
        std::cout << this->_name << " ClapTrap can't attack to " << target << " because out of energy." << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << this->_name << " wait.. he is dead! he can't cake any more damage." << std::endl;
        return ;
    }
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << this->_name << " ClapTrap can't be repaired because is dead!" << std::endl;
        return ;
    }
    if (this->_energyPoints > 0)
    {
        this->_hitPoints += amount;
        std::cout << this->_name << " get repaired and regaining " << amount << " amount of health." << std::endl;
        this->_energyPoints -= 1;
    }
}
