/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:36 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 14:39:13 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"){
    std::cout<<"Cat Constructor Called"<<std::endl;
}
Cat::~Cat(){
    std::cout<<"Cat destructor called"<<std::endl;
}

Cat::Cat(const Cat& copy):Animal(){
    std::cout<<"Cat copy constructor called"<<std::endl;
    *this = copy;
}

Cat& Cat::operator = (const Cat& f){
    this->setType(f.getType());
    return(*this);
}

void Cat::makeSound()const{
    std::cout<<type <<" makes Meow sound"<<std::endl;
}


