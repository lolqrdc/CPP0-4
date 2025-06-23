/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:22:51 by lolq              #+#    #+#             */
/*   Updated: 2025/06/23 13:38:48 by lolq             ###   ########.fr       */
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