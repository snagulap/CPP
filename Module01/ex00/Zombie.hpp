/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:02:10 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/16 18:31:38 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<iostream>
#include<string>

class Zombie{
    private:
    std::string name;
    public:
    Zombie (std::string name);
    ~Zombie();
    Zombie *newZombie(std::string nmae);
    void randomChump(std::string name);
    void announce(void);
};
Zombie *newZombie(std::string name);
void randomChump(std::string mame);

#endif