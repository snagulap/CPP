/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:06:38 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/25 18:58:50 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
   std::cout << "-------------------------------" << std::endl
		 << "         FragTrap test         " << std::endl
		 << "-------------------------------" << std::endl;

	std::string	targetName = "Alex";
	std::string	fragTrapName = "FT-Charles";

	FragTrap	fragTrap(fragTrapName);

	{
		std::cout << "-------------------------------" << std::endl
			 << "      FragTrap copy test       " << std::endl
			 << "-------------------------------" << std::endl;
		FragTrap	fragTrapCopy(fragTrap);

		fragTrapCopy.attack(targetName);
	}

	std::cout << "-------------------------------" << std::endl
		 << "     FragTrap methods test     " << std::endl
		 << "-------------------------------" << std::endl;
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(5);
	for (int i = 0; i < 5; i++){
		fragTrap.beRepaired(0);
		fragTrap.takeDamage(10);
	}
	fragTrap.highFivesGuys();
	fragTrap.takeDamage(10);
	fragTrap.highFivesGuys();

	return 0;

    return 0;
}