/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-21 10:16:02 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-21 10:16:02 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp" 

WrongAnimal::WrongAnimal()
{
	this->_wrongType = "Default";
	std::cout << this->_wrongType << " WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& wrongType)
{
	this->_wrongType = wrongType;
	std::cout << this->_wrongType << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	this->_wrongType = copy._wrongType;
	std::cout << "WrongAnimal copy constructor is build" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& op)
{
	this->_wrongType = op._wrongType;
	std::cout << "Copy assignement constructor called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << " (WrongAnimal) destructor is called 🪓" << std::endl;
}

const std::string& WrongAnimal::getWrongType() const
{
	return (this->_wrongType);
}

void	WrongAnimal::makeWrongSound() const
{
	return ;
}