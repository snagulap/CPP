/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:22:33 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/21 12:43:27 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zh = new Zombie[N];
    for( int i =0; i < N; i++)
        zh[i].setname(name);
    return (zh);
}