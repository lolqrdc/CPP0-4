/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 07:13:00 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 07:13:00 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
	public:
	// forme canonique
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& op);
		~Dog();
	// methode 
		void makeSound() const; /* (override)*/
};