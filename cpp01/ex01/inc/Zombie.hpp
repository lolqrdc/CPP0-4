/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:54:33 by lolq              #+#    #+#             */
/*   Updated: 2025/06/03 11:54:48 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <limits>

#define MAX_HORDE 500

class Zombie
{
    private:
        std::string name;

    public:
    // Constructor
    Zombie();
    // Constructor with params
    Zombie(const std::string &name);
    // Destructor
    ~Zombie();
    // Setter
    void    setNameZombie(const std::string &name);
    // Method
    void    announce();
};
// Functions 
Zombie  *zombieHorde(int N, std::string name);
