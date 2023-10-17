/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:58:22 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/15 21:34:37 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<string>

int main(int argc, char **argv){
    
    std::string line;
    if (argc < 4)
        return 1;
    std::fstream fio;
    char* filename = argv[1];
    const char* s1 = argv[2];
    const char*  s2 = argv[3];
    std::ifstream inputfile(filename);
    fio.open(filename, std::ios::trunc | std::ios::in);
    std::string replace = std::string(filename) + ".replace";
    if (!inputfile.is_open()) {
    std::cerr << "Failed to open the input file: " << filename << std::endl;
    return 1;
}
    std::ofstream outputfile(replace);
    // std::string line;
    if(!outputfile)
        std::cerr<<"Failed to create"<<std::endl;
    // if(inputfile.is_open())
    //     inputfile << s1 << "\n"<< s2<< std::endl;
    char ch;
    std::string buffer; // to store a part of the input file content
    while (inputfile.get(ch)) {
        buffer += ch;
        // Check if buffer contains s1
        if (buffer.size() >= std::strlen(s1) && buffer.find(s1) != std::string::npos) {
            // Replace s1 with s2 and write it to the output file
            size_t pos;
            while ((pos = buffer.find(s1)) != std::string::npos) {
                outputfile << buffer.substr(0, pos) << s2;
                buffer = buffer.substr(pos + std::strlen(s1));
            }
        }
    }

    // Write any remaining content in the buffer to the output file
    outputfile << buffer;
    
	inputfile.close();
	outputfile.close();
    return 0;
}