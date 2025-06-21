/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 07:12:56 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 07:12:56 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	// forme canonique
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& op);
	// methode
		void makeSound() const; /*override*/
};