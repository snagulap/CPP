/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:08:16 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/28 16:51:09 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
# define BSP_HPP

#include "fixed.hpp"
#include "point.hpp"
#include <iostream>
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif