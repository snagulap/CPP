/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:51:00 by snagulap          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/01 16:30:06 by snagulap         ###   ########.fr       */
=======
/*   Updated: 2024/01/01 19:09:56 by snagulap         ###   ########.fr       */
>>>>>>> 39e43f1be0b1b04dfd0f6d467c679867ede2409f
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
<<<<<<< HEAD
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
=======
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

>>>>>>> 39e43f1be0b1b04dfd0f6d467c679867ede2409f
#endif