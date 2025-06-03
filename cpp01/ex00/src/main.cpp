/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 11:18:58 by lolq              #+#    #+#             */
/*   Updated: 2025/06/03 13:12:24 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    // Zombie sur la heap
    std::cout << "Nom du zombie (heap) : ";
    std::getline(std::cin, name);
    Zombie *zom = newZombie(name);
    zom->announce();
    delete (zom);

    // Zombie sur la stack
    std::cout << "nom du zombie (stack) : ";
    std::getline(std::cin, name);
    randomChump(name);
    return (0);
}
