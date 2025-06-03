/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:54:43 by lolq              #+#    #+#             */
/*   Updated: 2025/06/03 12:05:41 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *horde;
    int     i;
    
    i = 0;
    if (N <= 0 || N > MAX_HORDE)
        return (NULL);
    horde = new Zombie[N];
    while (i < N)
    {
        horde[i].setNameZombie(name);
        i++;
    }
    return (horde);
}
