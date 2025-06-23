/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 07:13:37 by loribeir          #+#    #+#             */
/*   Updated: 2025/06/23 11:26:20 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << this->_type << " (Default) constructor is called! 🔨" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type), brain(new Brain())
{
	std::cout << this->_type << " constructor called! 🔨" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << this->_type << " Copy constructor is called 🔨" << std::endl;
}

Cat& Cat::operator=(const Cat& op)
{
	std::cout << "Copy assignement constructor called 🔨" << std::endl;
	if (this != &op)
	{
		this->_type = op._type;
		*brain = *op.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << this->_type << " Destructor is called!" << std::endl;
	delete brain;
}

void	Cat::makeSound() const 
{
	std::cout << this->_type << " Miaou! 😼" << std::endl;
}


Brain* Cat::getBrain() const
{
	return (brain);
}