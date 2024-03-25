/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:59:03 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/15 22:46:42 by snagulap         ###   ########.fr       */
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
    // std::map<std::string, std::function<void()>> options ={
    //     {"DEBUG",[this] {debug();}},
    //     {"INFO", [this]{info();}},
    //     {"WARNING", [this] {warning();}},
    //     {"ERROR", [this] {error();}}
    // };
    // if(options.find(level) != options.end()){
    //     options[level]();
    // }
    // else{
    //     std::cout<<"Invalid Level"<<std::endl;
    // }
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
                (this->*functions[i])();
                found = true;
                break;
            }
        }

        if (!found) {
            std::cout << "Invalid Level" << std::endl;
        }
}
