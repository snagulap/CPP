/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:53:53 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/16 11:38:33 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char** av){
    
    if (ac > 1)
        std::cout<<"Enter only one arguement"<<std::endl;
    Harl harl;
    std::string level;
    std::cout<<"Choose a level from DEBUG, INFO, WARNING, ERROR"<<std::endl;
    level = av[1];
    harl.complain(level);
    return(0);
}