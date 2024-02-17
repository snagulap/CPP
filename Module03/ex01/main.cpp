/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:06:38 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/25 16:51:49 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::string	targetName = "Alex";
	std::string	scavTrapName = "ST-Bob";

	ScavTrap	scavTrap(scavTrapName);
	scavTrap.takeDamage(0);
	scavTrap.attack(targetName);
	scavTrap.guardGate();
	for (int i = 0; i < 5; i++)
		scavTrap.beRepaired(10);
	scavTrap.attack(targetName);
	scavTrap.guardGate();
	scavTrap.takeDamage(10);
	scavTrap.guardGate();

    return 0;
}