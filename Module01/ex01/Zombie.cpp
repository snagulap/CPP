/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:20:47 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/21 12:50:57 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie:: Zombie(std::string name){
    this->zname = name;
}

Zombie::Zombie(void){
    std::cout<<this->zname<<" created"<<std::endl;
}
Zombie::~Zombie(){
    std::cout<<this->zname<<" destroyed"<<std::endl;
}

void Zombie::announce(void){
    std::cout<<this->zname << ": BraiiiiinnnzzzZ"<<std::endl;
}

void Zombie::setname(std::string name)
{
    this->zname = name;
}