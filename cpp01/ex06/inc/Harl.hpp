/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:40:21 by lolq              #+#    #+#             */
/*   Updated: 2025/06/10 14:58:59 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
    private:
        void    _debug();
        void    _info();
        void    _warning();
        void    _error();
    
    public:
        enum    Level { DEBUG, INFO, WARNING, ERROR, UNKNOWN };
        void    complain(std::string level);
};
