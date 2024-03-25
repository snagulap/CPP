/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:42:28 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/22 12:07:51 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>

class Weapon{
    private:
    std::string _type;

    public:
    Weapon(std::string type);
    ~Weapon();
    std::string getType();
    void setType(std::string type);   
};


#endif