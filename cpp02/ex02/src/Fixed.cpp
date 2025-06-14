/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:40:55 by lolq              #+#    #+#             */
/*   Updated: 2025/06/14 17:14:44 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructeur
Fixed::Fixed() : _value (0) {}

Fixed::Fixed(const int e) : _value(e << _bits) {}

Fixed::Fixed(const Fixed& copy) : _value(copy._value) {}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _bits))) {}

// Destructeur
Fixed::~Fixed() {}

// Copy de l'operateur
Fixed& Fixed::operator=(const Fixed& op)
{
    if (this != &op)
        this->_value = op._value;
    return (*this);
}

// Getter & setter
void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

int    Fixed::getRawBits() const 
{
    return (this->_value);
}

// Methodes
int Fixed::toInt(void) const
{
    return (this->_value >> Fixed::_bits);
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << Fixed::_bits));
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a > b)
        return b;
    return a;
    return (a < b) ? a : b;
}   

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return b;
    return a;
    //return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
    //return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return b;
    //return (a > b) ? a : b;
}

// Les operateurs 
bool    Fixed::operator>(const Fixed& other) const
{
    return (this->_value > other._value);
}

bool    Fixed::operator<(const Fixed& other) const
{
    return (this->_value < other._value);   
}

bool    Fixed::operator>=(const Fixed& other) const
{
    return (this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed& other) const
{
   return (this->_value <= other._value); 
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    result._value = (this->_value * other._value) >>_bits;
    return (result);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    result._value = (this->_value << _bits) / other._value;
    return (result);
}

Fixed &Fixed::operator++()
{
    ++_value;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++_value;
    return (tmp);
}

Fixed &Fixed::operator--()
{
    --_value;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --_value;
    return (tmp);
}

// Surcharge
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}