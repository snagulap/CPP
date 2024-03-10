/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:41:36 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/27 17:29:21 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal&operator = (const WrongAnimal& f);

        void setType(const std::string& type);
        std::string getType(void)const;
        void makeSound()const;
};
#endif