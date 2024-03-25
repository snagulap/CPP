/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:45:57 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/17 19:06:31 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void){
    std::vector<int> vec;
    for(int it = 0; it < 6; it++)
        vec.push_back(it);
    try {
        std::vector<int>::iterator result = easyfind(vec, 0);
        std::cout << "Value found at index: " << std::distance(vec.begin(), result) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}