/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 11:18:58 by lolq              #+#    #+#             */
/*   Updated: 2025/06/03 09:22:20 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // Un zoombie sur la heap
    Zombie *z = newZombie("Bidule");
    z->announce();
    delete (z); 
        //z->~Zombie();
    // Zombie sur la stack
    randomChump("Truc");
    return (0);
}
