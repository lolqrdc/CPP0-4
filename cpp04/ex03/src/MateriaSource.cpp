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
		_modeles[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_modeles[i] == copy._modeles[i])
			_modeles[i] = copy._modeles[i]->clone();
		else
			_modeles[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{
	if (this != &op)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_modeles[i])
			{
				delete _modeles[i];
				_modeles[i] = NULL;
			}
			if (op._modeles[i])
				_modeles[i] = op._modeles[i]->clone();
		}
	}
	return (*this);
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
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_modeles[i])
		{
			delete _modeles[i];
			_modeles[i] = NULL;
		}
	}
}
