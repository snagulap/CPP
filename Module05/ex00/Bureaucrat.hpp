/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:51:00 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/01 16:30:06 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>

class Bureaucrat{
  private:
    const std::string name;
    unsigned int grade; 

  public:
    Bureaucrat();
    Bureaucrat(std::string name, unsigned int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& copy);
    Bureaucrat& operator=(const Bureaucrat& f);
    std::string getName(void)const;
    unsigned int getGrade(void)const;
    void setGrade(unsigned int _grade);
    void Toincrement(int value);
    void Todecrement(int value);   
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
            virtual const char* what() const throw(){
              return "Grade is too low";
            }
    };
};

std::ostream &operator<<(std::ostream& os, Bureaucrat &bureaucrat);
#endif