/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:49:08 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 15:08:28 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& copy);
        Dog&operator=(const Dog& f);
        void makeSound()const;
};

#endif