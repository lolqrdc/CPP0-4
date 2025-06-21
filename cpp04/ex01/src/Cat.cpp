/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 07:13:37 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 07:13:37 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << this->_type << " (Default) constructor is called! 🔨" << std::endl;
}

Cat::Cat(const std::string& type)
{
	this->_type = type;
	std::cout << this->_type << " constructor called! 🔨" << std::endl;

}

Cat::Cat(const Cat& copy)
{
	this->_type = copy._type;
	std::cout << this->_type << " Copy constructor is called 🔨" << std::endl;
}

Cat& Cat::operator=(const Cat& op)
{
	this->_type = op._type;
	std::cout << "Copy assignement constructor called 🔨" << std::endl;
	return (*this);
}

void	Cat::makeSound() const 
{
	std::cout << this->_type << " Miaou! 😼" << std::endl;
}

