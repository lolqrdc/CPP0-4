/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:18:56 by lolq              #+#    #+#             */
/*   Updated: 2025/06/11 14:37:17 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <iostream>
#include <iomanip>

class Fixed
{
    private:
        int                 _value;
        static const int    _bits;

    public:
    // constructeur par defaut
    Fixed();
    // constructeur par copie
    Fixed(const Fixed &copy);
    // constructeur pour int
    Fixed(const int e);
    // constructeur pour float
    Fixed(const float f);
    // destructeur
    ~Fixed();
    // Operateur
    Fixed &operator=(const Fixed &op);
    // Conversion virgule fixe to float
    float   toFloat(void) const;
    // Conversion virgule fixe to int
    int     toInt(void) const;
    // Getters
    int    getRawBits(void) const; 
    // Setters
    void    setRawBits(int const raw);
};

// Surcharge de l'operateur d'insertion
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);