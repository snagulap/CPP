/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:19:02 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 15:12:49 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string& _target)
    : Form("Robotomy Request Form", 72, 45),target(_target){
    // Constructor implementation...
    std::srand(std::time(nullptr)); // Seed for randomization
}

RobotomyRequestForm::~RobotomyRequestForm() {
    // Destructor implementation...
}

void RobotomyRequestForm::executeAction() const {
    std::cout << "Making some drilling noises..." << std::endl;
    
    // Robotomize with a 50% success rate
    bool success = (std::rand() % 2 == 0);

    if (success) {
        std::cout << getName() << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed for " << getName() << "." << std::endl;
    }
}