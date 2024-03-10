/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:15:10 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/27 17:18:14 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout<<"Animal Default constructor called "<<std::endl;
}

Animal::Animal(const std::string& Type):type(Type){
    // std::cout<<"Animal Constructor called"<<std::endl;
} 

Animal::~Animal(){
    std::cout<<"Animal Destructor called"<<std::endl;
}

Animal::Animal(const Animal& copy){
    *this = copy;
    std::cout<<"Animal copy constructor called"<<std::endl;
}

Animal& Animal::operator = (const Animal& f){
    this->type = f.getType();
    return(*this);
}

void Animal::setType(const std::string& Type){
    type = Type;
}
std::string Animal::getType(void)const{
    return(type);
}

void Animal::makeSound()const{
    std::cout<<type << "makes No sound"<<std::endl;
}