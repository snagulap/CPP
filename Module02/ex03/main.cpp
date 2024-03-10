/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:49:17 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/28 17:14:02 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include "point.hpp"
#include "bsp.hpp"


int main( void ) {

Point a(0.0f, 0.0f);
Point b(4.0f, 0.0f);
Point c(2.0f, 3.0f);
// Point point(2.0f, 1.0f);
Point point(1.0f,1.0f);
if (bsp(a, b, c, point) == true)
    std::cout << "point is triangle" << std::endl;
else
    std::cout << "Point is not a triangle" << std::endl;
return 0;
}