/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:39:37 by lolq              #+#    #+#             */
/*   Updated: 2025/06/09 10:24:32 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string _name;
        Weapon      *_arme; // l'arme est un ptr pour éviter que l'humainB ait toujours une arme
    
    public:
    // Constructor with params
    HumanB(const std::string &name);
    // Destructor
    ~HumanB();
    // Setter : modify private data
    void    setWeapon(Weapon &arme);
    // Method
    void    attack() const;
};