/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:14:39 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/21 12:50:31 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
class Zombie{
    private:
    std::string zname;
    public:
    Zombie (std::string name);
    Zombie(void);
    ~Zombie();
    void announce(void);
    void setname(std::string name);
};
Zombie *zombieHorde(int N, std::string name);

#endif