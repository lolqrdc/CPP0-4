/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:54:37 by lolq              #+#    #+#             */
/*   Updated: 2025/06/03 12:24:40 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int N;
    std::string name;

    std::cout << "Combien de zombies veux-tu dans la horde ?";
    std::cin >> N;
    std::cin.ignore();
    
    std::cout << "Une idée de nom pour tes zombies ?";
    std::getline(std::cin, name);
    
    Zombie  *horde = zombieHorde(N, name);
    int i = 0;
    if (horde)
    {
        while (i < N)
        {
            horde[i].announce();
            i++;
        }
        delete[] horde;
    }
    else
        std::cout << "Impossible de créer la horde." << std::endl;
    return (0);
}