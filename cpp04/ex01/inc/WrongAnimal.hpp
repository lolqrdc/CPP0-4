/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 09:28:02 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 09:28:02 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _wrongType;
	public:
	// forme canonique
		WrongAnimal();
		WrongAnimal(const std::string& wrongType);
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator=(const WrongAnimal& op);
		~WrongAnimal();
	// getter
		const std::string& getWrongType() const;
	// methode
		void makeWrongSound() const;
};