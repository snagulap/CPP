/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:51:26 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/01 21:41:28 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
 std::cout<<"Constructor"<<std::endl;  
}
Bureaucrat::Bureaucrat(const std::string _name,unsigned int _grade):name(_name),grade(_grade){
    
}
Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
    *this = copy;
}
