/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:09:29 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/25 16:41:07 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator = (const ScavTrap& f);
        ~ScavTrap();

        void guardGate();
};

#endif