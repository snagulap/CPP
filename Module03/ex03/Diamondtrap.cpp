/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:16:18 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/28 19:31:21 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Diamondtrap.hpp"

Diamondtrap::Diamondtrap(): FragTrap(), ScavTrap(){
    
}
Diamondtrap::~Diamondtrap(){}

Diamondtrap::Diamondtrap(std::string name): ClavTrap(name + "_clap_name"),
    FragTrap(name), ScavTrap(name){
    this->Name = name;
    this->hit_points = FragTrap::defaultHitPoints;
    this->energy_points = ScavTrap::defaultEnergyPoints;
    this->attack_damage = FragTrap::defaultAttackDamage;     
}

Diamondtrap::Diamondtrap(const Diamondtrap& cpy): ClapTrap(cpy), FragTrap(cpy), 
    ScavTrap(cpy){
        *this =  original;    
}

Diamondtrap Diamondtrap::&operator=(const Diamondtrap& f){
    
}