/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:13:50 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/25 18:20:40 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(const std::string& name);
    ~FragTrap();
    FragTrap &operator=(const FragTrap& f);
    FragTrap(const FragTrap& copy);
    void highFivesGuys();
};


#endif