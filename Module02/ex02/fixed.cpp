/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:50:29 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/24 17:20:55 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"


Fixed::Fixed():Int(0){
    // std::cout << "Default Constructor called" << std::endl;
}
Fixed::Fixed(const int num) : Int(num * (1 << Fixed::Float)) {
    // std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float num_float) : Int(roundf(num_float * (1<< Fixed::Float))) {
    // std::cout << "Float Constructor called" << std::endl;
}
Fixed::~Fixed(){
    // std::cout<<"Destructor Called"<<std::endl;
}

float Fixed::toFloat(void)const{
    return (float)Int / (float)(1 << Fixed::Float);
}

int Fixed::toInt(void)const{
    return (this->Int >> Fixed::Float);
}
int Fixed::getRawBits(void)const{
    return (Int);    
}
void Fixed::setRawBits(int const raw){
    this->Int = raw;
}

Fixed::Fixed(const Fixed& copy){
    // std::cout<<"copy constructor called"<<std::endl;
    *this = copy;
}

 std::ostream &operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat(); // Use the appropriate member variable or method
    return os;
}
Fixed& Fixed::operator = (const Fixed& f){
    // std::cout<<"Copr assignment operator called"<<std::endl;
          this->setRawBits(f.getRawBits());
        return *this;
    }

Fixed& Fixed::operator++(){
        ++this->Int;
    return (*this);
}

Fixed& Fixed::operator--(){
        --this->Int;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed copy(*this);
    copy.Int = this->Int++;
    return (copy);
}

Fixed Fixed::operator--(int){
    Fixed copy(*this);
    copy.Int = this->Int--;
    return (copy);
}

bool Fixed::operator>(const Fixed& other)const{
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other)const{
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other)const{
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other)const{
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other)const{
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other)const{
    return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other)const{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other)const{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other)const{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other)const{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    return((a.getRawBits() > b.getRawBits()) ? a : b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
    return((a.getRawBits() < b.getRawBits()) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    return((a.getRawBits() > b.getRawBits()) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    return((a.getRawBits() < b.getRawBits()) ? a : b);
}