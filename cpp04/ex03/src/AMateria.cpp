/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-23 12:33:33 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-23 12:33:33 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string& type) : _type(type) {}

AMateria::AMateria(const AMateria& copy) : _type(copy._type) {}

AMateria& AMateria::operator=(const AMateria& op)
{
	if (this != &op)
		this->_type = op._type;
	return (*this);
}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}

