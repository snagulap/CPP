/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:36 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 18:25:28 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"){
    std::cout<<"Cat Constructor Called"<<std::endl;
    this->brain = new Brain;
}
Cat::~Cat(){
    std::cout<<"Cat destructor called"<<std::endl;
    delete brain;
}

Cat::Cat(const Cat& copy):Animal(){
    std::cout<<"Cat copy constructor called"<<std::endl;
    *this = copy;
}

Cat& Cat::operator = (const Cat& f){
    this->setType(f.getType());
    if(this->brain)
        delete this->brain;
    this->brain = new Brain(*f.brain);
    return(*this);
}

void Cat::makeSound()const{
    std::cout<<type <<" makes Meow sound"<<std::endl;
}


