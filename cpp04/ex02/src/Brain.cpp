/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 10:06:06 by lolq              #+#    #+#             */
/*   Updated: 2025/06/23 10:44:25 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain (default) constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain (copy) constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& op)
{
    std::cout << "Copy assignement constructor called" << std::endl;
    if (this != &op)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = op.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor is called" << std::endl;
}

const std::string& Brain::getIdea(int i) const
{
    static const std::string error = "";
    if (i < 0 || i >= 100)
        return (error);
    return (ideas[i]);
}

void    Brain::setIdea(int i, const std::string& idea)
{
    if (i < 0 || i >= 100)
        return ;
    ideas[i] = idea;
}



