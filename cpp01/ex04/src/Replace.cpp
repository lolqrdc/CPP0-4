/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:53:27 by lolq              #+#    #+#             */
/*   Updated: 2025/06/09 17:38:05 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

bool    replace_in_file(const std::string &filename, const std::string &s1, const std::string &s2) {
// Vérification
    if (s1.empty() || filename.empty())
        return (false);
// Lecture du fichier en argument av[1]
    std::ifstream ifs(filename.c_str());
    if (!ifs)
        return (false);
    std::string content;
    std::string line;
    while (std::getline(ifs, line))
        content += line + "\n";
    ifs.close();
// Remplace
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
// Ecriture sur le fichier de sortie
    std::ofstream ofs((filename + ".replace").c_str());
    if (!ofs)
        return (false);
    ofs << content;
    ofs.close();
    return (true);
}
