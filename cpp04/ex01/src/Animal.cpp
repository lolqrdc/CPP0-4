/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 07:13:39 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 07:13:39 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Default";
	std::cout << this->_type << " constructor is build" << std::endl;
}

Animal::Animal(const std::string& type)
{
	this->_type = type;
	std::cout << "Animal(" << this->_type << ") constructor is build" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	this->_type = copy._type;
	std::cout << "Animal copy constructor is build" << std::endl;
}

Animal& Animal::operator=(const Animal& op)
{
	this->_type = op._type;
	std::cout << "Copy assignement constructor called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor is called" << std::endl;
}

const std::string& Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	return ;
}
