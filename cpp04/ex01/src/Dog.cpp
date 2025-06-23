/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 07:13:35 by loribeir          #+#    #+#             */
/*   Updated: 2025/06/23 11:26:23 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << this->_type << " (default) constructor is build 🔨" << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type), brain(new Brain())
{
	std::cout << this->_type << " constructor is build 🔨" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << this->_type << " Copy constructor is build 🔨" << std::endl;
}

Dog& Dog::operator=(const Dog& op)
{
	std::cout << "Copy assignement constructor called 🔨" << std::endl;
	if (this != &op)
	{
		this->_type = op._type;
		*brain = *op.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << this->_type << " Destructor is called 🪓" << std::endl;
	delete brain;
}

void Dog::makeSound() const 
{
	std::cout << this->_type << " Woof! 🐶" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (brain);
}