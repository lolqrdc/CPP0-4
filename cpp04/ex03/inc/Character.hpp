/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-23 13:10:10 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-23 13:10:10 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
	
	public:
	//forme canonique
		Character(const std::string& name);
		Character(const Character& copy);
		Character& operator=(const Character& op);
		virtual ~Character();
	// getter
		virtual const std::string& getName() const;
	// methodes
		virtual void equip(AMateria* m);
    	virtual void unequip(int idx);
    	virtual void use(int idx, ICharacter& target);
};

