/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:56:53 by lolq              #+#    #+#             */
/*   Updated: 2025/06/10 17:34:04 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
    private:
    int                 _value;
    static const int    _bits;
 
    public:
    // Constructeur par default
    Fixed();
    // Constructeur de copie
    Fixed(const Fixed &other);
    // Surcharge de l'op d'affectation
    Fixed   &operator=(const Fixed &other);
    // Destructeur
    ~Fixed();
    // Getter
    int     getRawBits(void) const;
    // Setter
    void    setRawBits(int const raw);
};
