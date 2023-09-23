/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:30:33 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/21 16:41:04 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
    Zombie *zh = zombieHorde(5, "42Zombie");
    for(int i =0; i<5;i++)
        zh[i].announce();
    
    delete[] zh;
}