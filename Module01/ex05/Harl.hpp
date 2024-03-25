/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:59:06 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/15 22:44:40 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include<iostream>
#include<map>
#include <functional>

class Harl{
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    public:
    void complain(std::string level);
    Harl(void);
    ~Harl(void);
    
   typedef void (Harl::*MemberFunctionPtr)(void);
};

#endif