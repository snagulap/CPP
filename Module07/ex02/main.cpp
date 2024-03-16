/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:04:36 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/16 20:16:43 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    // Test default constructor
    Array<int> arr1;
    std::cout << "Array 1 size: " << arr1.size() << std::endl;

    // Test constructor with size
    Array<double> arr2(5);
    std::cout << "Array 2 size: " << arr2.size() << std::endl;

    // Test copy constructor
    Array<int> arr3(arr1);
    std::cout << "Array 3 size: " << arr3.size() << std::endl;

    // Test assignment operator
    arr1 = arr3;
    std::cout << "Array 1 size after assignment: " << arr1.size() << std::endl;

    // Test subscript operator
    try {
        std::cout << "Element at index 3 in arr2: " << arr2[3] << std::endl;
        std::cout << "Element at index 10 in arr2: " << arr2[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}