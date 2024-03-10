/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:36:46 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 17:43:07 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


#include "Bureaucrat.hpp"
class Bureaucrat;

class Form{
    private:
        std::string name;
        bool isSigned;
        const unsigned int gradeToSign;
        const unsigned int gradeToExecute;
    public:
        // Form();
        Form(const std::string name, const unsigned int gradeToSign, const unsigned int gradeToExecute);
        ~Form();
        Form(const Form& copy);
        Form& operator=(const Form& f);
        std::string getName(void)const;
        bool getIsSigned(void)const;
        unsigned int getGradeToSign(void)const;
        unsigned int getGradeToExecute(void)const;
        void beSigned(const Bureaucrat& bureaucrat);
        //exceptions
        class GradeTooHighException :public std::exception{
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is too high";
                }
        };
        class GradeTooLowException :public std::exception{
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is too low";
                }
        };
};

std::ostream &operator<<(std::ostream& os, const Form& form);

#endif