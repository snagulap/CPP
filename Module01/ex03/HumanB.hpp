/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:48:12 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/22 12:45:18 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB__HPP
#define HUMANB__HPP

#include"weapon.hpp"

class HumanB{
    private:
    std::string _name;
    Weapon* _weapon;  
    public:
    HumanB(std::string name);
    ~HumanB();    
    void attack();  
    void setWeapon(Weapon& weapon);  
};

#endif