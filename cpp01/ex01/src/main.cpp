/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:54:37 by lolq              #+#    #+#             */
/*   Updated: 2025/06/03 12:06:48 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie  *horde;
    int     N;
    int     i;

    N = 5;
    i = 0;
    horde = zombieHorde(N, "Bidule");
    if (horde != NULL)
    {
        while (i < N)
        {
            horde[i].announce();
            i++;
        }
        delete[] horde;
    }
    else
        std::cout << "Failed to create the horde." << std::endl;
    return (0);
}