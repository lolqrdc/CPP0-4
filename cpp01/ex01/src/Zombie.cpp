/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:54:40 by lolq              #+#    #+#             */
/*   Updated: 2025/06/03 12:27:50 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const std::string &name) : name(name) {}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed." << std::endl;
}

void    Zombie::setNameZombie(const std::string &name)
{
    this->name = name;
}

void    Zombie::announce()
{
    std::cout << name << ": zZzZzZzZ" << std::endl;
}
