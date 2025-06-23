/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:59:21 by lolq              #+#    #+#             */
/*   Updated: 2025/06/23 13:27:08 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#include "ICharacter.hpp"

class AMateria
{
    protected:
        const std::string _type;
    
    public:
    // forme canonique
        AMateria(const std::string& type);
        AMateria(const AMateria& copy);
        AMateria& operator=(const AMateria& op);
        virtual AMateria* clone() const = 0;
        virtual ~AMateria();
    // getter
        const std::string& getType() const;
    // methodes
        virtual void use(ICharacter& target);
};