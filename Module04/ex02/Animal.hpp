/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:11:33 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 19:01:44 by snagulap         ###   ########.fr       */
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
        virtual ~Animal();
        Animal(const Animal& copy);
        Animal&operator=(const Animal& f);
        
        void setType(const std::string& type);
        std::string getType(void)const;
        virtual void makeSound()const;
};

// AAnimal for clarity
class AAnimal { 
public:
    static AAnimal* createInstance() {
        return new AAnimal();
    }

    // Define your makeSound function
    void makeSound() {
        std::cout << " makes No sound" << std::endl;
    }
    // Make the copy constructor and destructor if needed
   AAnimal(const AAnimal& other){
        std::cout<<"AAnimal copy constructor called"<<std::endl;
        *this = other;
   } 
    
    ~AAnimal(){
     std::cout<<"AAnimal Destructor called"<<std::endl;   
    }

private:
    AAnimal() { // Private constructor
        std::cout << "AAnimal Default constructor called" << std::endl;
    }
};

#endif
