/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:40:27 by lolq              #+#    #+#             */
/*   Updated: 2025/06/10 15:35:56 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Convert the text passed as an argument if the level is unknown, return -1.
int getLevel(std::string level) 
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < Harl::UNKNOWN; i++)
    {
        if (levels[i] == level)
            return (i);
    }
    return (-1);
}

// The switch will choose the case corresponding to the level. 
void    switchHarl(Harl &harl, int level)
{
    switch (level)
    {
        case 0:
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 1:
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 2:
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main (int argc, char *av[])
{
    if (argc != 2) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
    }
    int level = getLevel(av[1]);
    Harl    harl;
    switchHarl(harl, level);
    return (0);
}