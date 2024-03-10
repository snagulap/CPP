/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:49:08 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 20:06:43 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal{
    private:
        Brain* brain;
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog& copy);
        Dog&operator=(const Dog& f);
        virtual void makeSound()const;
};

#endif