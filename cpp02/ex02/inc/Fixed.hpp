/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:40:59 by lolq              #+#    #+#             */
/*   Updated: 2025/06/14 17:14:34 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
    private:
        int                 _value;
        static const int    _bits = 8;

    public:
        // Constructeurs
        Fixed();
        Fixed(const Fixed& copy);
        Fixed(const int e);
        Fixed(const float f);
        Fixed &operator=(const Fixed &op);

        // Destructeur 
        ~Fixed();
        // Operateur de comparaison
        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;
    
        // Operateur d'arithmetiques
        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

        // Operateur d'incrementation
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        
        // Methodes
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        float toFloat() const;
        int   toInt() const;
        
        // Getter & setter
        int    getRawBits(void) const; 
        void    setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);