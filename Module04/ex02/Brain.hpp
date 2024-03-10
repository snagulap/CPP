/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:10:32 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 17:58:56 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

// #include "Animal.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"
#include <iostream>
class Brain{
  private:
      std::string ideas[100];
  public:
      Brain();
      ~Brain();
      Brain(const Brain& copy);
      Brain&operator=(const Brain& f);
};

#endif