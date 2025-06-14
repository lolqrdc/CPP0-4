/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:36:29 by lolq              #+#    #+#             */
/*   Updated: 2025/06/14 16:22:08 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <limits>

int main ()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;
    
    std::cout << "Adresse brain         : " << &brain << std::endl;
    std::cout << "Adresse via stringPTR : " << &stringPTR << std::endl;
    std::cout << "Adresse via stringREF : " << &stringREF << std::endl;

    std::cout << "Valeur de brain       : " << brain << std::endl;
    std::cout << "Valeur via stringPTR  : " << *stringPTR << std::endl;
    std::cout << "Valeur via stringREF  : " << stringREF << std::endl;
    return (0);
}