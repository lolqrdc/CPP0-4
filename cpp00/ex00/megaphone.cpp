/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 11:21:57 by lolq              #+#    #+#             */
/*   Updated: 2025/05/26 07:17:33 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <fstream>
#include <iostream>

int main(int argc, char **av)
{
    int i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * ";
    else
    {
        while (i < argc)
        {
            int j = 0;
            while (av[i][j])
            {
                std::cout << (char)std::toupper(av[i][j]);
                j++;
            }
            i++;
        }
    }
    std::cout << std:: endl;
    return (0);
}
