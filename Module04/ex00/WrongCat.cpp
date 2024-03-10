/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:41:27 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/27 17:34:23 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat"){
    std::cout<<"WrongCat Constructor Called"<<std::endl;
}
WrongCat::~WrongCat(){
    std::cout<<"WrongCat destructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& copy):WrongAnimal(){
    std::cout<<"WrongCat copy constructor called"<<std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator = (const WrongCat& f){
    this->setType(f.getType());
    return(*this);
}

void WrongCat::makeSound()const{
    std::cout<<type <<" makes Meow sound"<<std::endl;
}