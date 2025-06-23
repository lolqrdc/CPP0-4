/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-23 13:48:14 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-23 13:48:14 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_modeles[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_modeles[i] == copy._modeles[i])

	}

}

MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{

}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_modeles[i])
		{
			_modeles[i] = m->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_modeles[i] && _modeles[i]->getType() == type)
			return (_modeles[i]->clone());
	}
	return (nullptr);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_modeles[i])
		{
			delete _modeles[i];
			_modeles[i] = nullptr;
		}
	}
}
