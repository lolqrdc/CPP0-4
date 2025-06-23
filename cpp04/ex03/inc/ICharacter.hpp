/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-23 12:33:29 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-23 12:33:29 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include <iostream>
#include <string>

#include "AMateria.hpp"

class ICharacter
{
    public:
        virtual ~ICharacter();
        virtual const std::string& getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};