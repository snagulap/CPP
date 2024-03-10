/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:26:15 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 20:07:08 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"){
    std::cout<<"Dog constructor Called"<<std::endl;
}

Dog::~Dog(){
    std::cout<<"Dog destructor called"<<std::endl;
}

Dog::Dog(const Dog& copy){
    std::cout<<"Dog copy constructor called"<<std::endl;
    *this = copy;
}

Dog& Dog::operator = (const Dog& f){
        this->setType(f.getType());
    if(this->brain)
        delete this->brain;
    this->brain = new Brain(*f.brain);
    return(*this);
}

void Dog::makeSound()const{
    std::cout<<type<<" Makes Bow Bow"<<std::endl;
}
