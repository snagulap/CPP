/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:48:22 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/09 21:17:58 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude"ScalarConverter.hpp"





ScalarConverter::converter(const std::string input){
    try{
        if(ischar(input))
            execute(input);
        else if(isfloat(input))
            excecute(input);
        
    }    
}