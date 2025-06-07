/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:39:42 by lolq              #+#    #+#             */
/*   Updated: 2025/06/06 16:00:27 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class   Weapon
{
    private:
        std::string type;

    public:
    // Setter
    void    setType(const std::string& type);
    // Getter
    const   std::string& getType() const;
};