/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:12:36 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/23 13:37:13 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(){   
}

Span::Span(unsigned int Num): N(Num), vec(), curr(0) {     
}

Span::~Span(){
}

Span::Span(const Span& f) : N(f.N), vec(f.vec), curr(f.curr) {
}

Span& Span::operator=(const Span& f) {
    if (this != &f) {
        N = f.N;
        vec = f.vec;
    }
    return *this;
}


void Span::addNumber(unsigned int n){
    try{
        if(curr < Span::N){
            Span::vec.push_back(n);
            curr++;  
            }
        else
            throw std::runtime_error("Failed to add number. Too many numbers in the list!");
    }
    catch(const Span::MyException & e){
        std::cout<< e.what() << std::endl;   
    }
}

void Span::range(std::vector<unsigned int>::iterator start, std::vector<unsigned int>::iterator end){
    for(std::vector<unsigned int>::iterator it = start; it < end; it++)
        addNumber(*it);
}

unsigned int Span::shortestSpan() const {
        if (vec.size() < 2) {
            throw std::runtime_error("Cannot find span: Less than two numbers stored.");
        }

        std::vector<unsigned int> sortedVec = vec;
        std::sort(sortedVec.begin(), sortedVec.end());
        unsigned int minSpan = sortedVec[1] - sortedVec[0]; 
        for (unsigned int i = 1; i < sortedVec.size() - 1; i++) {
            unsigned int span = sortedVec[i+ 1] - sortedVec[i];
            if (span < minSpan) {
                minSpan = sortedVec[i+ 1] - sortedVec[i];
            }
        }
        return minSpan;
    }

    unsigned int Span::longestSpan() const {
        if (vec.size() < 2) {
            throw std::runtime_error("Cannot find span: Less than two numbers stored.");
        }

        std::vector<unsigned int> sortedVec = vec;
        std::sort(sortedVec.begin(), sortedVec.end());
        return (sortedVec[sortedVec.size() -1] - sortedVec[0]);
    }