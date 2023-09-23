/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:51:10 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/22 12:45:12 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name): _name(name),_weapon(NULL){
    std::cout<<"HumanB "<<this->_name<<" created "<<std::endl;;
}

HumanB::~HumanB(){
    std::cout<<"HumanB "<<this->_name<<" destroyed"<<std::endl;
}
void HumanB::attack(){
    std::cout<<this->_name<<" attacks with his "<< this->_weapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
    this->_weapon=&weapon;
}