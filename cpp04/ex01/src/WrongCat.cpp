/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-21 10:36:13 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-21 10:36:13 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_wrongType = "WrongCat";
	std::cout << this->_wrongType << " (default) constructor is build 🔨" << std::endl;
}

WrongCat::WrongCat(const std::string& wrongType)
{
	this->_wrongType = wrongType;
	std::cout << this->_wrongType << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	this->_wrongType = copy._wrongType;
	std::cout << "WrongCat copy constructor is build 🔨" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& op)
{
	this->_wrongType = op._wrongType;
	std::cout << "Copy assignement constructor called 🔨" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor is called 🪓" << std::endl;
}

void	WrongCat::makeWrongSound() const
{
	std::cout << this->_wrongType << " Miaou!? 😼" << std::endl;
}
