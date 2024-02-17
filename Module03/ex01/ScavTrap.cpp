/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:09:25 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/25 16:54:28 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default") {
    this->Hit = 100;
    this->Energy = 50;
    this->Attack_Damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
            this->Hit = 100;
            this->Energy = 50;
            this->Attack_Damage = 20;
            std::cout << "Constructor called" << std::endl;
        }

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
    if(!this->Hit)
        std::cout<<"ScavTrap"<< this->Name<< "can't take any more damage!"<<std::endl;
    else
        std::cout << Name << " is now in Gatekeeper mode." << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &f){
    this->Name = f.Name;
    this->Hit = f.Hit;
    this->Energy = f.Energy;
    this->Attack_Damage = f.Attack_Damage;
    return(*this);
}

