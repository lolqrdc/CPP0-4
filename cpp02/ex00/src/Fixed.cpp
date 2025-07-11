/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:56:51 by lolq              #+#    #+#             */
/*   Updated: 2025/06/11 15:21:09 by lolq             ###   ########.fr       */
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

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &op) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &op)
        this->_value = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(int const raw) 
{
    std::cout << "setRawBIts member function called" << std::endl;
    this->_value = raw;
}