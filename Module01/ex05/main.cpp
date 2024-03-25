/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:59:10 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/15 22:20:10 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(void){
    Harl harl;
    std::string level;
    std::cout<<"Choose a level from DEBUG, INFO, WARNING, ERROR"<<std::endl;
    std::cin >> level;
    harl.complain(level);
    return(0);
}