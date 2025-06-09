/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:35:02 by lolq              #+#    #+#             */
/*   Updated: 2025/06/09 17:36:11 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main (int argc, char *av[]) {
    if (argc != 4) {
        std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return (-1);
    }
    else if (!replace_in_file(av[1], av[2], av[3])) {
        std::cout << "An error occured during replacement" << std::endl;
        return (-1);
    }
    std::cout << "Replacement completed in file: " << av[1] << ".replace";
    return (0);
}