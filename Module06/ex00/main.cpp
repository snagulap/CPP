/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:42:45 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 20:13:04 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"ScalarConverter.hpp"

int main(int ac, char**av){
    if(ac != 2){
        std::cerr<<"Not allowed"<<std::endl;
        return (1);    
    }
    std::string input = av[1];
    try{
            ScalarConverter converter(input);
    }
    catch(){
        
    }    
        
    
    return (0);
}