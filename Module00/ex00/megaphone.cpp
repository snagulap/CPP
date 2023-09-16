/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:56:02 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/16 11:56:04 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int argc, char **argv)
{
    if (argc <= 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        for (int j = 0; argv[i][j]; ++j) {
            char c = std::toupper(argv[i][j]);
            std::cout << c;
        }
        std::cout << ' ';
    }

    std::cout << std::endl;

    return 0;
    
}