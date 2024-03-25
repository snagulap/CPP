/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:54:17 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/23 13:35:46 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include<vector>
#include <stdexcept>
class Span{
  private:
    unsigned int N;
    std::vector<unsigned int> vec;
    unsigned int curr;

  public:
    Span();
    ~Span();
    Span(unsigned int N);
    Span(const Span& f);
    Span& operator=(const Span& copy);
    void addNumber(unsigned int num);
    void range(std::vector<unsigned int>::iterator start, std::vector<unsigned int>::iterator end);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    class MyException: public std::exception{
        public:
          virtual const char* what() const throw(){
            return "";
          }
    };
};

#endif