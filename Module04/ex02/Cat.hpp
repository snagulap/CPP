/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:00:05 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 18:07:19 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain* brain;
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat& copy);
        Cat&operator = (const Cat& f);
        virtual void makeSound(void)const;
};

#endif