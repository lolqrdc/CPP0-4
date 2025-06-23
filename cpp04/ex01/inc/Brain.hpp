/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 11:09:08 by loribeir          #+#    #+#             */
/*   Updated: 2025/06/23 10:43:00 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
    // forme canonique
        Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& op);
        ~Brain();
    // getter & setter
    const std::string& getIdea(int i) const;
    void setIdea(int i, const std::string& idea);
};