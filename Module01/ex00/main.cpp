/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:11:46 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/16 17:05:07 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;
    
    std::cout<<"Normal allocation:"<<std::endl;
    std::cin>>name;
    Zombie z(name);


    
    std::cout<<" * allocation"<<std::endl;
    std::cin>>name;
    Zombie *newz = new Zombie(name);
    newz->announce();
    delete newz;
    
    randomChump("42Zombies");
    return 0;
}
