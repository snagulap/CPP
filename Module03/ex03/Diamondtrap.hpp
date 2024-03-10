/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:16:22 by snagulap          #+#    #+#             */
/*   Updated: 2024/01/28 19:19:11 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Diamondtrap_HHP
# define Diamondtrap_HHP

class Diamondtrap{
    private:
        std::string Name;
    public:
        Diamondtrap();
        Diamondtrap(std::string Name);
        ~Diamondtrap();
        Diamondtrap(const Diamondtrap& cpy);
        Diamondtrap& operator=(const Diamondtrap& f);
        
        using ScavTrap::attack;
        void whoAmI(void);
}


#endif