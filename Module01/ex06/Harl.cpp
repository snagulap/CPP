/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:53:56 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/16 12:03:10 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl(void){
    std::cout<< "Harl constructor created"<<std::endl;
}

Harl::~Harl(void){
    std::cout<< "Harl destructed"<<std::endl;
}

void Harl::debug(void){
    std::cout<<"DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}

void Harl::info(void){
    std::cout<<"INFO: I cannot believe adding extra bacon costs more money. You didn’t put\
    enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning(void){
    std::cout<<" WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month"<<std::endl;
}

void Harl::error(void){
    std::cout<<"ERROR: This is unacceptable! I want to speak to the manager now."<<std::endl;
}


void Harl::complain(std::string level){
             MemberFunctionPtr   functions[] = {
              &Harl::debug,
              &Harl::info,
              &Harl::warning,
              &Harl::error
        };

        // Define the order of functions based on levels
        const std::string levels[] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR"
        };

        bool found = false;
        for (int i = 0; i < 4; ++i) {
            if (level == levels[i]) {
                switch(i) {
                case 0: (this->*functions[0])();
                        break;
                case 1:(this->*functions[0])();
                        (this->*functions[1])();
                        break;
                case 2:(this->*functions[0])();
                        (this->*functions[1])();
                        (this->*functions[2])();
                        break;
                case 3:(this->*functions[0])();
                        (this->*functions[1])();
                        (this->*functions[2])();
                        (this->*functions[3])();
                        break;}
                found = true;

            }
        }
        if (!found) {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
}
