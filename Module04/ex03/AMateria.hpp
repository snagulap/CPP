/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:16:18 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/26 21:06:33 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

// Forward declaration for ICharacter
class ICharacter;

class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    ~AMAteria();
    AMateria(const std::string &type);

    const std::string &getType()const;

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) = 0;
};

#endif