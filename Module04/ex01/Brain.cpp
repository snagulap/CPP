/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:10:27 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 18:26:52 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout<<"Brain default Constructor called"<<std::endl;
}

Brain::~Brain(){
    std::cout<<"Brain Destructor called"<<std::endl;
}

Brain::Brain(const Brain& copy){
    std::cout<<"Brain copy constructor called"<<std::endl;
    // for (int i = 0; i < 100; ++i) {
    //         this->ideas[i] = copy.ideas[i];
    //     }
    *this = copy;
}

Brain& Brain::operator = (const Brain& f){
    std::cout<<"Brain copy assignment operator called"<<std::endl;
    if(this != &f){
        int	i = -1;
		while (++i < 100)
			this->ideas[i] = f.ideas[i];
    }
    return(*this);
}