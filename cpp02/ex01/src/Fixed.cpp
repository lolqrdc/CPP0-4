/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:18:59 by lolq              #+#    #+#             */
/*   Updated: 2025/06/11 15:02:06 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const   int Fixed::_bits = 8;

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int e)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = e << Fixed::_bits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(f * (1 << Fixed::_bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &op)
        this->_value = op.getRawBits();
    return (*this);
}

// Conversion de la value en virgule fixe pour le int et le float
int   Fixed::toInt(void) const
{
    return (this->_value >> Fixed::_bits);
}

float   Fixed::toFloat(void) const 
{
    return ((float)this->_value / (1 << Fixed::_bits));
}

// Le setter
void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

// Le getter
int    Fixed::getRawBits() const 
{
    return (this->_value);
}

// Surcharge de l'op d'insertion pour afficher la value en float
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
