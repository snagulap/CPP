/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:28:28 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/01 13:10:41 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exception_ex.hpp"
#include <iostream>
myece
int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "Usage: ./exception_practice <string>" << std::endl;
        return 1;
    }
    try{
        if (strcmp(argv[1], "my exception") == 0)
            throw excep::myexception();
        std::cout << "No exception thrown" << std::endl;}
    catch (const std::exception &e) {
        // Code to handle the exception
        std::cerr << "Exception caught: " << e.what() << std::endl;
        return 1; // or handle the exception in an appropriate way
    }
    return 0;
}
