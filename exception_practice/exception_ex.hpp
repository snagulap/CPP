/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_ex.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:11:23 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/01 13:00:19 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_EX_HPP
# define EXCEPTION_EX_HPP

#include <iostream>
class excep{
    private:
        const std::string _msg;
    public:
        excep(std::string msg);
        excep(const excep &copy);
        excep &operator=(excep const &rhs);
        ~excep();
        const std::string getMsg(void)const;
        class myexception: public std::exception{
            virtual const char* what() const throw(){
                return "my exception";
            }
        };
};

#endif