/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:45:52 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/22 12:53:00 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA__HPP
#define HUMANA__HPP

#include"weapon.hpp"

class HumanA{
    private:
    std::string _name;
    Weapon &_weapon;  
    
    public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack();
    void setWeapon(Weapon weapon);
};

#endif