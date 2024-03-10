/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:13:54 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/25 18:57:09 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->Hit = 100;
    this->Energy = 100;
    this->Attack_Damage = 30;
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(): ClapTrap("Default"){
    this->Hit = 100;
    this->Energy = 100;
    this->Attack_Damage = 30;
    std::cout<<"FragTrap constructor Called"<<std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << Name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
    if(!this->Hit)
        std::cout<<"FragTrap" << Name<<"can't take any more"<<std::endl;
    else
        std::cout << "FragTrap " << Name << " requests a high five!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy){
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& f){
    this->Name = f.Name;
    this->Hit = f.Hit;
    this->Energy = f.Energy;
    this->Attack_Damage = f.Attack_Damage;
    return(*this);
}