/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 07:14:19 by loribeir          #+#    #+#             */
/*   Updated: 2025-06-20 07:14:19 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== constructeurs ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "=== type ===" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "=== makeSound ===" << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	std::cout << "=== destructeurs ===" << std::endl;
	delete(meta);
	delete(j);
	delete(i);
	std::cout << "=== WrongAnimal ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "=== type ===" << std::endl;
	std::cout << wrongCat->getWrongType() << " " << std::endl;

	std::cout << "=== (wrong) MakeSound ===" << std::endl;
	wrongMeta->makeWrongSound();
	wrongCat->makeWrongSound();

	std::cout << "=== (wrong) destructeurs ===" << std::endl;
	delete(wrongMeta);
	delete(wrongCat);
	
	return(0);
}