/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:08:27 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 17:57:43 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    int i = 0;
	Animal *ptr[6];
	while (i < 6)
	{
		if (i < 3)
			ptr[i] = new Dog;
		else
			ptr[i] = new Cat;
		i++;
	}
	i = -1;
	while (++i < 6)
		delete ptr[i];
    
    // Dog *tmp = new Dog();
	// Dog *tmp2 = new Dog(*tmp2);
	

	// delete tmp;
	// delete tmp2;
//-----------------------------------
	// Dog *tmp = new Dog();
	// Dog *tmp2 = new Dog();
	
	// *tmp = *tmp2;

	// delete tmp;
	// delete tmp2;
return 0;
}