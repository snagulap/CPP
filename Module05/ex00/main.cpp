/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:40:11 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/01 16:35:44 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(void){

    Bureaucrat b1("Srini", 150);
    Bureaucrat b2("ram", 1);
    Bureaucrat b3("Srini", 10);
    Bureaucrat b4("Srini", 10);
    Bureaucrat b5("ram", 11);
    b4.Toincrement(10);
    b5.Todecrement(150);
    return 0;
}