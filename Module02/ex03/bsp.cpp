/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:08:25 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/28 17:03:28 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

static Fixed abs(Fixed a){
    if(a < 0)
        return a * -1;
    return a;
}

static Fixed cal_area(Point const point1, Point const point2, Point const point3){
    return (abs((point1.getx() * (point2.gety() - point3.gety()) + 
                    point2.getx() * (point3.gety() - point1.gety()) + 
                    point3.getx() * (point1.gety() - point2.gety())) / 2));
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    Fixed totalarea = cal_area(a, b, c);
    Fixed area1 = cal_area(point, b, c);
    Fixed area2 = cal_area(a, point, c);
    Fixed area3 = cal_area(a, b, point);

    return (totalarea == (area1 + area2 + area3));
}