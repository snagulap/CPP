/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:08:05 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/28 16:28:49 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point(void): x(0), y(0){  
};

Point::~Point(void){
    
}

Point::Point(const Point& cpy)
{
    *this = cpy;
}

Point::Point(const float x, const float y): x(x), y(y){
    
}

Fixed Point::getx(void)const{
    return this->x;
}
Fixed Point::gety(void) const{
    return this->y;
}

Point& Point::operator=(const Point& f){
    (Fixed)this->x = f.getx();
    (Fixed)this->y = f.gety();
    return *this;
}