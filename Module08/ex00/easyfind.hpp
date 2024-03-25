/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:47:19 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/17 18:53:34 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T container, int value){
   typename T::iterator it = std::find(container.begin(), container.end(),value);
    if(it == container.end())
        throw std::runtime_error("Value not found");
    return it;    
}


#endif