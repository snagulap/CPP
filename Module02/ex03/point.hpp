/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:07:56 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/28 16:26:31 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "fixed.hpp"

class Point{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(void);
        ~Point(void);
        Point(const float x, const float y);
        Point(const Point& cpy);
        Point& operator=(const Point& f);
        Fixed getx(void) const;
        Fixed gety(void) const;
        
};


#endif