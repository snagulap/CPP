/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:38:42 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/14 14:48:22 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"contact.hpp"
#include <sstream>
#include <iomanip>
#include <iostream>

class PHONEBOOK{
    private:
    static int const nc = 8;
    static int index;
    CONTACT contact[nc];
    public:
    void ADD(void);
    void SEARCH(void);

};


#endif
