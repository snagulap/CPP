/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:03:23 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/16 17:34:27 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fixed.hpp"

Fixed::Fixed():fixed(0){
std::cout<<" Default Constructor created"<<std::endl;    
}

Fixed::Fixed(const Fixed &copy){
    std::cout<<"Copy constructor called"<<std::endl;
      this->setRawBits(copy.getRawBits());
}

Fixed::~Fixed(){
std::cout<<"Destructor called"<<std::endl;    
}

Fixed& Fixed::operator = (const Fixed &f){
        std::cout<<"Copy assignment operator called"<<std::endl;
          this-> setRawBits(f.getRawBits());
        return *this;
    }

int Fixed::getRawBits(void)const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (fixed);    
}
void Fixed::setRawBits(int const raw){
    this->fixed = raw;
}



