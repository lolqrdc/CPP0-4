/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 11:18:55 by lolq              #+#    #+#             */
/*   Updated: 2025/05/30 12:28:05 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const std::string &name) : name(name) {}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << " is destroyed." << std::endl;
}
