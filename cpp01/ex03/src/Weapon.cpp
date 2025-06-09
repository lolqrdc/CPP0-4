/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:09:04 by lolq              #+#    #+#             */
/*   Updated: 2025/06/09 11:14:30 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Initialisation du constructeur
Weapon::Weapon(const std::string &type) : _type(type) {};

// Initialisation du destructeur
Weapon::~Weapon() {};

// Getter 
const   std::string &Weapon::getType() const {
    return (_type);
}

// Setter
void    Weapon::setType(const std::string &type) {
    _type = type;
}