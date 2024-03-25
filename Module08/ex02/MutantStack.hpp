/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:54:46 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/24 08:33:35 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <iostream>

template<typename T>
class MutantStack {
private:
    std::stack<T> stack;

public:
    // Typedefs for iterator types
    typedef typename std::deque<T>::iterator iterator;
   
    MutantStack() {}
    // Member functions similar to std::stack
    void push(const T& value) {
        stack.push(value);
    }

    void pop() {
        stack.pop();
    }

    T& top() {
        return stack.top();
    }

    const T& top() const {
        return stack.top();
    }

    bool empty() const {
        return stack.empty();
    }

    size_t size() const {
        return stack.size();
    }

    // Iterator functions
    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }

    MutantStack(const std::stack<T>& s) : std::stack<T>(s) {}
};

#endif