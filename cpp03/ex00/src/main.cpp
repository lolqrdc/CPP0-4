/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:54:49 by lolq              #+#    #+#             */
/*   Updated: 2025/06/16 18:31:00 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap human = ClapTrap();
    ClapTrap humanB = ClapTrap("Human"); 
    human = humanB;
     
    human.takeDamage(4);
    human.takeDamage(5);
    human.beRepaired(20);
    human.takeDamage(2);
    human.takeDamage(2);

    human.attack("HumanB");
    return (0);
}

