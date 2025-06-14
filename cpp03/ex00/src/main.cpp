/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:53:09 by lolq              #+#    #+#             */
/*   Updated: 2025/06/14 18:49:44 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Human");
    ClapTrap b("Zombie");

    a.attack("Zombie");
    b.takeDamage(5);
    b.beRepaired(2);

    b.attack("Human");
    a.takeDamage(8);
    a.beRepaired(2);

    return (0);
}