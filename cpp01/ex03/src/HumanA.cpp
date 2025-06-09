/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:39:44 by lolq              #+#    #+#             */
/*   Updated: 2025/06/09 11:25:01 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// Initialisation du constructeur
HumanA::HumanA(const std::string &name, Weapon &arme) 
    : _name(name), _arme(arme) {};

// Initialisation du destructeur
HumanA::~HumanA() {};

void    HumanA::attack() const {
    std::cout << _name << " attacks with their " << _arme.getType() << std::endl;
}
