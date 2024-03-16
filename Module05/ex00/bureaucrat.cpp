/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
=======
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
>>>>>>> 39e43f1be0b1b04dfd0f6d467c679867ede2409f
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:51:26 by snagulap          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/01 16:32:27 by snagulap         ###   ########.fr       */
=======
/*   Updated: 2024/01/01 21:41:28 by snagulap         ###   ########.fr       */
>>>>>>> 39e43f1be0b1b04dfd0f6d467c679867ede2409f
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
 std::cout<<"Constructor"<<std::endl;  
}
Bureaucrat::Bureaucrat(const std::string _name,unsigned int _grade):name(_name),grade(_grade){
<<<<<<< HEAD
    try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
=======
    
>>>>>>> 39e43f1be0b1b04dfd0f6d467c679867ede2409f
}
Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
    *this = copy;
}
<<<<<<< HEAD

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& f){
    if (this != &f)
        this->grade = f.grade;
    return *this;
}

std::string Bureaucrat::getName() const{
    return this->name;
}

unsigned int Bureaucrat::getGrade() const{
    return this->grade;
}

void Bureaucrat::setGrade(unsigned int _grade){
    this->grade = _grade;
}


void Bureaucrat::Toincrement(int value){
    try{
        if (this->getGrade() - value < 1)
            throw Bureaucrat::GradeTooHighException();}
        catch (Bureaucrat::GradeTooHighException &e){
            std::cout << e.what() << std::endl;
            return;
        }
        this->setGrade(this->getGrade() - value);
}

void Bureaucrat::Todecrement(int value){
    try{
        if (this->getGrade() + value > 150)
            throw Bureaucrat::GradeTooLowException();}
        catch (Bureaucrat::GradeTooLowException &e){
            std::cout << e.what() << std::endl;
            return;
        }
        this->setGrade(this->getGrade() + value);
}


std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade is <" << bureaucrat.getGrade() << std::endl;
    return os;
}

=======
>>>>>>> 39e43f1be0b1b04dfd0f6d467c679867ede2409f
