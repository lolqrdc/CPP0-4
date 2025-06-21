/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 07:12:49 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 07:12:49 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
	// forme canonique
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& copy);
		Animal& operator=(const Animal& op);
		virtual ~Animal();
	// getter
		const std::string& getType() const;
	// methodes
		virtual void makeSound() const;
};