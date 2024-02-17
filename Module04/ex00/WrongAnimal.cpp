/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:41:32 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/27 17:15:27 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout<<"WrongAnimal Default Constructor Called"<<std::endl;
}

WrongAnimal::WrongAnimal(const std::string& Type):type(Type){
    // std::cout<<"WrongAnimal Constructor called"<<std::endl;
} 

WrongAnimal::~WrongAnimal(){
    std::cout<<"WrongAnimal Destructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
    *this = copy;
    std::cout<<"WrongAnimal copy constructor called"<<std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& f){
    this->type = f.getType();
    return(*this);
}

void WrongAnimal::setType(const std::string& Type){
    type = Type;
}
std::string WrongAnimal::getType(void)const{
    return(type);
}

void WrongAnimal::makeSound()const{
    std::cout<<type << "makes No sound"<<std::endl;
}