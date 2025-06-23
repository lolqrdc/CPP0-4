/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-23 12:33:58 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-23 12:33:58 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
	// forme canonique
        Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice& op);
        virtual ~Ice();

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};