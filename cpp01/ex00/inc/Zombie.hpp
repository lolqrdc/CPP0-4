/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 11:18:56 by lolq              #+#    #+#             */
/*   Updated: 2025/06/03 11:03:26 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <limits>

class Zombie
{
    private:
        std::string name;
    
    public:
    // Constructor
    Zombie();
    // Constructor with params
    Zombie(const std::string& name);
    // Destructor
    ~Zombie();
    // Methods
    void    announce();
};
// Functions
Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
