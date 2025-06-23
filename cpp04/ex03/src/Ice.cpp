/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-23 12:34:23 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-23 12:34:23 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::Ice(const Ice& copy) : AMateria(copy) {}

Ice& Ice::operator=(const Ice& op)
{
	if (this != &op)
		this->_type = op._type;
	return (*this);
}

Ice::~Ice() {}

AMateria* AMateria::clone() const
{
	return new Ice;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}