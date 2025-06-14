/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:53:08 by lolq              #+#    #+#             */
/*   Updated: 2025/06/14 19:07:27 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "default";
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    std::cout << "ClapTrap (default) constructed." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    this->_name = name;
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;    
    std::cout << "ClapTrap " << _name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    this->_name = copy._name;
    this->_attackDamage = copy._attackDamage;
    this->_energyPoints = copy._energyPoints;
    this->_hitPoints = copy._hitPoints;
    std::cout << "ClapTrap " << _name << " copied." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _attackDamage = other._attackDamage;
        _energyPoints = other._energyPoints;
        _hitPoints = other._hitPoints;
    }
    std::cout << "ClapTrap " << _name << " assigned." << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " can't attack, not enough energy or hit points." << std::endl;
    else
    {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already destroyed!" << std::endl;
        return ;
    }
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << "has been destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't repair, not enough energy or hit points." << std::endl;
        return ;
    }
    this->_energyPoints--;
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " repairs itself, regaining " << amount << " hit points!" << std::endl; 
}