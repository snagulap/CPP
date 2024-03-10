/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:14:06 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 21:05:54 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Amateria.hpp"

AMateria::AMateria(const std::string &type) : type(type){
    std::cout<<"Amateria constructor called"<<std::endl;
}

std::string AMateria::&getType() const{
        return type;
    }