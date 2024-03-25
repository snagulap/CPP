/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:35:34 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/23 13:11:55 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void    testTooManyNumbers()
{
    std::cout << "----------------------" << std::endl;
    std::cout << "[*] testTooManyNumbers" << std::endl;
    std::cout << "----------------------" << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(9);
        sp.addNumber(11);   
    }
    catch (std::exception& e)
    {
        std::cout << "[ERROR]: " << e.what() << std::endl;
    }
}

void    testValidCase()
{
    std::cout << "----------------------" << std::endl;
    std::cout << "[*] testValidCase" << std::endl;
    std::cout << "----------------------" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main(void){
    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // sp.addNumber(9);
    // sp.addNumber(11);
    testTooManyNumbers();
    testValidCase();
    return(0);
}