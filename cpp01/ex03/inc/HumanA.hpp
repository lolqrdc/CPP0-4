/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:39:40 by lolq              #+#    #+#             */
/*   Updated: 2025/06/09 11:24:51 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <iostream>

class   HumanA
{
    private:
        std::string _name;
        Weapon  &_arme; // l'arme est une ref pour toujours exister

    public:
    // Constructor with params
    HumanA(const std::string &name, Weapon &arme);
    // Destructor
    ~HumanA();
    // Method 
    void attack() const; 
};
