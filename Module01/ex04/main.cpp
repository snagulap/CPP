/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:58:22 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/22 14:13:06 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>

int main(int argc, char **argv){
    
    std::string line;
    if (argc < 4)
        return 1;
    argv = NULL;
    std::fstream fio;
    fio.open("file.txt", std::ios::trunc | std::ios::out | std::ios::in);
    while(fio)
    {
        std::getline(std::cin,line);
        if (line == "-1")
            break;
        fio << line << std::endl;
    }
    return 0;
}