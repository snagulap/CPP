/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:39:34 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/16 18:10:45 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b){
    T *temp;
    temp = a;
    a = b;
    b = *temp;
}

template <typename T>
T max(T a, T b){
    if (a == b)
        return b;
    else
        return (a > b) ? a : b;
}

template <typename T>
T min(T a, T b){
    if (a == b)
        return b;
    else
        return (a < b) ? a : b;
}

#endif