/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:55:20 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/14 13:38:54 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PHONEBOOK phonebook;
    std::string str;
    std::cout<<"Enter a command: ";
    while(getline(std::cin, str))
    {
    if(str == "ADD")
        phonebook.ADD();
    else if(str == "SEARCH")
        phonebook.SEARCH();
    else if(str == "EXIT")
        break;
    }        
    return(0);     
}