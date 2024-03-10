/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:18:09 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 15:03:23 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
    const std::string target;

public:
    ShrubberyCreationForm(const std::string& target);
    virtual ~ShrubberyCreationForm();
protected:
    virtual void executeAction() const;
};

#endif