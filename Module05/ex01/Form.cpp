/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:36:34 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 17:42:20 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string _name, const unsigned int _gradeToSign, const unsigned int _gradeToExecute): name(_name), isSigned(false), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute) {
    try{
        if (_gradeToSign < 1 || _gradeToExecute < 1)
            throw Form::GradeTooHighException();
        else if (_gradeToSign > 150 || _gradeToExecute > 150)
            throw Form::GradeTooLowException();
    }
    catch(const Form::GradeTooLowException & e){
            std::cout << e.what() << std::endl;
   }
    catch(const Form::GradeTooHighException & e){
            std::cout << e.what() << std::endl;
        }
}

Form::~Form(){}
Form::Form(const Form &copy) : name(copy.name), isSigned(copy.isSigned),
                               gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute) {
}

Form &Form::operator=(const Form &f) {
    if (this != &f) {
        this->isSigned = f.isSigned;
        this->name = f.name;
        const_cast<unsigned int &>(this->gradeToSign) = f.gradeToSign;
        const_cast<unsigned int &>(this->gradeToExecute) = f.gradeToExecute;
    }
    return *this;
}

bool Form::getIsSigned(void)const{
 return isSigned;   
}

unsigned int Form::getGradeToSign(void)const{
    return gradeToSign;
}

unsigned int Form::getGradeToExecute(void)const{
    return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() <= gradeToSign){
        isSigned = true;
        std::cout << bureaucrat.getName() << "Signed " << name << std::endl; 
} else{
    throw GradeTooLowException();
}
}

std::string Form::getName() const {
    return name; // Assuming 'name' is a member variable in your Form class
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "Form " << form.getName() << " - Grade to sign: " << form.getGradeToSign()
       << " - Grade to Execute: " << form.getGradeToExecute()
       << " - Signed: " << (form.getIsSigned() ? "Yes" : "No") << std::endl;
    return os;
}