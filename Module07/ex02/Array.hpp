/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:04:39 by snagulap          #+#    #+#             */
/*   Updated: 2024/03/16 20:16:17 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template<typename T>
class Array {
private:
    T* elements;
    unsigned int size_;

public:
    // Default constructor
    Array() : elements(nullptr), size_(0) {}

    // Constructor with size
    explicit Array(unsigned int n) : size_(n) {
        elements = new T[n];
        for (unsigned int i = 0; i < size_; ++i) {
            elements[i] = T(); // default initialization
        }
    }

    // Copy constructor
    Array(const Array& other) : size_(other.size_) {
        elements = new T[size_];
        for (unsigned int i = 0; i < size_; ++i) {
            elements[i] = other.elements[i];
        }
    }

    // Assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] elements;
            size_ = other.size_;
            elements = new T[size_];
            for (unsigned int i = 0; i < size_; ++i) {
                elements[i] = other.elements[i];
            }
        }
        return *this;
    }

    // Destructor
    ~Array() {
        delete[] elements;
    }

    // Subscript operator
    T& operator[](unsigned int index) {
        if (index >= size_) {
            throw std::out_of_range("Index out of bounds");
        }
        return elements[index];
    }

    // Size function
    unsigned int size() const {
        return size_;
    }
};

#endif