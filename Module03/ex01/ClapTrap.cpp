/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:07:07 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/25 11:55:20 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout<<"Constructor called"<<std::endl;
}


ClapTrap::~ClapTrap(){
    std::cout<<"Destructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
    *this = copy;
}
ClapTrap::ClapTrap(std::string name): Name(name), Hit(10), Energy(10), Attack_Damage(0) {
            std::cout << "Constructor called" << std::endl;
        }

ClapTrap& ClapTrap::operator=(const ClapTrap& f){
    this->Hit = f.Hit;
    this->Energy = f.Energy;
    this->Attack_Damage = f.Attack_Damage;
    return(*this);
}
void ClapTrap::attack(const std::string& target) {
    if (Hit > 0 && Energy > 0) {
        Energy -= 1;
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << Name << " can't attack due to low energy or no hit points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (Hit > 0) {
        Hit -= amount;
        if (Hit <= 0)
            std::cout << "ClapTrap " << Name << " can't take any more damage!" << std::endl;
        else
            std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage. Current HP: " << Hit << std::endl;
    } 
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (Hit > 0) {
        Hit += amount;
        Energy -= 1;
        std::cout << "ClapTrap " << Name << " is repaired for " << amount << " points. Current HP: " << Hit << std::endl;
    } else {
        std::cout << "ClapTrap " << Name << " can't be repaired due to no hit points!" << std::endl;
    }
}
