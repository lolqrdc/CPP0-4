/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 07:13:35 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 07:13:35 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << this->_type << " (default) constructor is build 🔨" << std::endl;
}

Dog::Dog(const std::string& type)
{
	this->_type = type;
	std::cout << this->_type << " constructor is build 🔨" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	this->_type = copy._type;
	std::cout << this->_type << " Copy constructor is build 🔨" << std::endl;
}

Dog& Dog::operator=(const Dog& op)
{
	this->_type = op._type;
	std::cout << "Copy assignement constructor called 🔨" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << this->_type << " Destructor is called 🪓" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << this->_type << " Woof! 🐶" << std::endl;
}

