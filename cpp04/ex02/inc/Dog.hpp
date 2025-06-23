/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 07:13:00 by loribeir          #+#    #+#             */
/*   Updated: 2025/06/23 11:25:22 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
	// forme canonique
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& op);
		~Dog();
	// methode 
		void makeSound() const; /* (override)*/
	// getter & setter
		Brain* getBrain() const;
};