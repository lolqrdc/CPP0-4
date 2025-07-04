/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:39:42 by lolq              #+#    #+#             */
/*   Updated: 2025/06/09 11:08:35 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class   Weapon
{
    private:
        std::string _type;
    
    public:
    // Constructor with params
    Weapon(const std::string &type);
    // Destructor
    ~Weapon();
    // Getter read only private data
    const   std::string &getType() const;
    // Setter: modify private data
    void    setType(const std::string &type);
};