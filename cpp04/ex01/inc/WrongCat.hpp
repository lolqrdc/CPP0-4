/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 09:29:15 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 09:29:15 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	// forme canonique
		WrongCat();
		WrongCat(const std::string& wrongType);
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& op);
		~WrongCat();
	// methode
		void makeWrongSound() const; 
};