/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:51:00 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/01 19:09:56 by snagulap         ###   ########.fr       */
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
    Bureacrat(std::string name, unsigned int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& copy);
    Bureaucrat& operator=(const Bureaucrat& f);

    std::string getName(void)const;
    unsigned int getGrade(void)const;
    void Toincrement(void);
    void Todecrement(void);   
    //exceptions
    class GradeTooHighException :public std::Exception{
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException :public std::Exception{
        public:
            virtual const char* what() const throw();
    };
    
    std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
};

#endif