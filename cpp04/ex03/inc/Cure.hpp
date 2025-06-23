/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:27:25 by lolq              #+#    #+#             */
/*   Updated: 2025/06/23 13:38:48 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        virtual ~Cure();

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
