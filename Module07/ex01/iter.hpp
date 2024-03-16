/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:23:34 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/16 20:02:38 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>

template <typename T>
void iter(T *arr, int size, void (*array)(T)){
    for(int i =0; i < size; i++)
        array(arr[i]);
}

template <typename T>
void printElement(T element) {
    std::cout << element << " ";
}

#endif