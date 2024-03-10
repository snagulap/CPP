/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_ex.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:14:12 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/01 13:05:26 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exception_ex.hpp"

excep::excep(std::string msg): _msg(msg){
}

excep::excep(const excep &copy){
    *this = copy;
}

excep::~excep(){
}

excep& excep::operator=(const excep &rhs) {
    if (this != &rhs) {  // Check for self-assignment
        *this = rhs.getMsg();
    }
    return *this;
}

const std::string excep::getMsg(void)const{

    return _msg;
}

