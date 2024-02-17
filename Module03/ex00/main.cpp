/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:51:09 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/25 11:39:21 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main(void){
    ClapTrap claptrap("Zobies");
    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);

    std::string	trapName0 = "CT-Alex";
	std::string	trapName1 = "CT-Bob";

	ClapTrap	trap0(trapName0);
	ClapTrap	trap1(trapName1);

	trap0.beRepaired(0);
	for (int i = 0; i < 9; i++) {
		trap0.attack(trapName1);
		trap1.takeDamage(0);
	}
	trap0.attack(trapName1);

	trap1.takeDamage(5);
	trap1.beRepaired(4);
	trap1.attack(trapName0);
	trap0.takeDamage(5);

	trap1.takeDamage(4);
	trap1.beRepaired(4);
}