/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:11:33 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 15:08:08 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const std::string& type);
        ~Animal();
        Animal(const Animal& copy);
        Animal&operator=(const Animal& f);
        
        void setType(const std::string& type);
        std::string getType(void)const;
        void makeSound()const;
};

#endif
