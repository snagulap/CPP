/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:52:25 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/22 12:41:44 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"weapon.hpp"

void Weapon::setType(std::string type)
{
    this->_type = type;
}
Weapon::Weapon(std::string type):_type(type){
                                 ;
}
Weapon::~Weapon(){
    ;
}
std::string Weapon::getType(){
 return this->_type ;   
}
