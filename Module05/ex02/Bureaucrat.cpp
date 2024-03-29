/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:51:26 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 14:41:26 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(){
 std::cout<<"Constructor"<<std::endl;  
}
Bureaucrat::Bureaucrat(const std::string _name,unsigned int _grade):name(_name),grade(_grade){
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
}
Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
    *this = copy;
}

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

void    Bureaucrat::signForm( Form& form ) {
    try {
        form.beSigned( *this );
        std::cout << *this << " signed " << form.getName() << std::endl;
    } catch (Form::GradeTooLowException &e) {
        std::cout << name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form){
    try{
        form.execute(*this);
        std::cout<<getName() << "executed" << form.getName() << std::endl;      
    } catch(const std::exception &e){
        std::cerr << getName() << "couldn't execute" << form.getName() << "because" << e.what() <<std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade is <" << bureaucrat.getGrade() << std::endl;
    return os;
}

