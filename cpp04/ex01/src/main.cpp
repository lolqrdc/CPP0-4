/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 07:14:19 by loribeir          #+#    #+#             */
/*   Updated: 2025/06/23 11:39:53 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const int N = 6;
    Animal* animals[N];

    std::cout << "=== Constructor ===" << std::endl;
    for (int i = 0; i < N / 2; ++i)
        animals[i] = new Dog();
    for (int i = N / 2; i < N; ++i)
        animals[i] = new Cat();

    std::cout << "\n=== MakeSound ===" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << animals[i]->getType() << " : ";
        animals[i]->makeSound();
    }

    std::cout << "\n=== Destructor ===" << std::endl;
    for (int i = 0; i < N; ++i)
	{
        delete animals[i];
	}
	std::cout << "\n=== Les copies profondes ===" << std::endl;
	Dog	OgDog;
	OgDog.getBrain()->setIdea(0, "Je veux une balle");
	Dog copyDog = OgDog;
	OgDog.getBrain()->setIdea(0, "Je veux jouer!");
	std::cout << "L'idee 0 du dogo: " << OgDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "L'idee 0 de la copie dogo: " << copyDog.getBrain()->getIdea(0) << std::endl;
	
    return 0;
}