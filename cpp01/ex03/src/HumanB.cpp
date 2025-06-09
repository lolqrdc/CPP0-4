/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:39:46 by lolq              #+#    #+#             */
/*   Updated: 2025/06/09 11:04:12 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name) {};

HumanB::~HumanB() {};

void    HumanB::setWeapon(Weapon &arme) {
    _arme = &arme;
    
}

void    HumanB::attack() const {
    if (_arme)
        std::cout << _name << " attack with their " << _arme->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack with" << std::endl;
}