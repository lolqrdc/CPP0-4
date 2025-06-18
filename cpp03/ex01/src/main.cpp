/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:24:59 by lolq              #+#    #+#             */
/*   Updated: 2025/06/18 17:19:32 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Test : constructeurs ===" << std::endl;
    
    // constructeur par defaut
    ScavTrap defaultScav;
    
    // constructeur avec nom
    ScavTrap namedScav("Guardian");
    
    // constructeur de copie
    ScavTrap copyScav(namedScav);
    
    std::cout << "\n=== Test : fonctions de base ===" << std::endl;
    
    // attack
    namedScav.attack("Enemy1");
    namedScav.attack("Enemy2");
    
    // takeDamage
    namedScav.takeDamage(30);
    namedScav.takeDamage(50);
    
    // beRepaired
    namedScav.beRepaired(20);
    
    std::cout << "\n=== Test : fonction speciale (guardGate) ===" << std::endl;
    
    // guardGate en vie
    namedScav.guardGate();
    
    std::cout << "\n=== Test : un ScavTrap mort ===" << std::endl;
    
    // nouveau ScavTrap et le tuer
    ScavTrap deadScav("DeadBot");
    deadScav.takeDamage(100);
    
    // Tester les fonctions sur un ScavTrap mort
    deadScav.attack("Target");
    deadScav.beRepaired(10);
    deadScav.guardGate();
    
    std::cout << "\n=== Test : l'op d'assignation ===" << std::endl;
    
    ScavTrap assignedScav;
    assignedScav = namedScav;
    assignedScav.guardGate();
    
    std::cout << "\n=== Test : d'out of energy ===" << std::endl;
    
    ScavTrap energyTest("EnergyBot");
    
    // Run out of l'energie
    for (int i = 0; i < 51; i++) {
        energyTest.attack("Target");
    }
    
    std::cout << "\n=== Fin des tests - Destruction des objets ===" << std::endl;
    
    return 0;
}