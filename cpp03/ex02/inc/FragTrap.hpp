/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 09:31:58 by lolq              #+#    #+#             */
/*   Updated: 2025/06/19 10:17:18 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const FragTrap& set);
        ~FragTrap();

        void highFivesGuys(void);
};