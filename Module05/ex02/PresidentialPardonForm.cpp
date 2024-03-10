/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:19:40 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 15:16:51 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& _target)
    : Form("Presidential Pardon Form", 25, 5), target(_target) {
    // Constructor implementation...
}

PresidentialPardonForm::~PresidentialPardonForm() {
    // Destructor implementation...
}

void PresidentialPardonForm::executeAction() const {
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
