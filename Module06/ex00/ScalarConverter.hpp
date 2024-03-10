/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:48:03 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 20:27:24 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
};