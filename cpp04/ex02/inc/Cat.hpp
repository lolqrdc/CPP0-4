/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 07:12:56 by loribeir          #+#    #+#             */
/*   Updated: 2025/06/23 10:55:34 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
	// forme canonique
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& op);
		~Cat();
	// methode
		void makeSound() const; /*override*/
	// getter & setter
		Brain* getBrain() const;

};