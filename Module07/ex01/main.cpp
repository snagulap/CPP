/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:23:11 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/16 19:59:16 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp" // assuming iter function template is defined in iter.hpp

int main() {
    // Test with an integer array
    int intArray[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(intArray) / sizeof(int);
    std::cout << "Iterating over integer array: ";
    iter(intArray, size1, printElement<int>);
    std::cout << std::endl;

    // Test with a double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size2 = sizeof(doubleArray) / sizeof(double);
    std::cout << "Iterating over double array: ";
    iter(doubleArray, size2, printElement<double>);
    std::cout << std::endl;

    // Test with a character array
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    int size3 = sizeof(charArray) / sizeof(char);
    std::cout << "Iterating over character array: ";
    iter(charArray, size3, printElement<char>);
    std::cout << std::endl;

    return 0;
}