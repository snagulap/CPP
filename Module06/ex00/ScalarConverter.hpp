/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:48:03 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/16 15:44:55 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCOVERTER_HPP
#define SCALARCOVERTER_HPP
#include<iostream>


class ScalarConverter{
    private:
        int _int;
        char _char;
        float _float;
        double _double;
        std::string input;
        
    
    public:
        ScalrConverter();
        // ScalarConverter()
        ~ScalarConverte();
        ScalarConverter(ScalarConverte &copy);
        ScalarConverter& operator=(ScalarConverter& f);
        
        static void coverter(const std::string input);
        class ScalarException :public exception{
            public:
                virtual const char* what() const throw(){
                    return "Exception called";
                }
        }
};


#endif