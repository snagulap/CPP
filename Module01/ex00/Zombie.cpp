/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:11:09 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/16 18:31:28 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie:: Zombie(std::string name){
    this->name = name;
}
Zombie::~Zombie(){
    std::cout<<this->name<<" destroyed"<<std::endl;
}

void Zombie::announce(void){
    std::cout<<this->name << ": BraiiiiinnnzzzZ"<<std::endl;
}