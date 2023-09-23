/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:51:05 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/22 12:52:53 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name),_weapon(weapon){
    std::cout<<this->_name<<" created with "<< _weapon.getType()<<std::endl;
}

HumanA::~HumanA(){
    std::cout<<"HumanA "<<this->_name<<" destroyed "<<std::endl;;
}
void HumanA::attack(){
    std::cout<<this->_name<<" attacks with his "<< _weapon.getType()<<std::endl;
}

void HumanA::setWeapon(Weapon weapon){
    this->_weapon=weapon;
}
