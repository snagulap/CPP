/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:18:20 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 15:04:18 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("Shrubbery Creation Form", 145, 137), target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    // Destructor logic
}

void ShrubberyCreationForm::executeAction() const { // Removed 'override'
    std::ofstream file(getName() + "_" + getName() + ".shrubbery");
    if (file.is_open()) {
        file << "ASCII trees content goes here...\n";
        std::cout << "Shrubbery created for " << getName() << std::endl;
    } else {
        throw std::runtime_error("Failed to open file for Shrubbery creation");
    }
    file.close();
}