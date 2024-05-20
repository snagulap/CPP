#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <stdexcept>

template<typename T>
class Vector {
private:
    int size;
    int capacity;
    T* elements;
    // Helper function to resize the internal array
    void resize(int newCapacity) {
        T* newElements = new T[newCapacity];
        for (int i = 0; i < size; i++) {
            newElements[i] = elements[i];
        }
        delete[] elements;
        elements = newElements;
        capacity = newCapacity;
    }
public:
    // Default constructor
    Vector() : size(0), capacity(10), elements(new T[capacity]) {}
    
    // Destructor            
    ~Vector() {
        delete[] elements;
    }
    
    // Assignment operator                 
    Vector& operator=(const Vector& f) {
        if (this != &f) {
            T* newElements = new T[f.capacity];
            for (int i = 0; i < f.size; i++) {
                newElements[i] = f.elements[i];
            }
            delete[] elements;
            elements = newElements;
            size = f.size;
            capacity = f.capacity;
        }
        return *this;
    }
    
    // Copy constructor
    Vector(const Vector& f) : size(f.size), capacity(f.capacity), elements(new T[f.capacity]) {
        for (int i = 0; i < f.size; i++) {
            elements[i] = f.elements[i];
        }
    }
    
    // Subscript operator
    T& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return elements[index];
    }              

    // Getters
    int getSize() const {
        return size;
    }
    
    int getCapacity() const {
        return capacity;
    }
    
    T* getElements() const {
        return elements;
    }

    // Operations
    // Add element to the end
    void pushBack(const T& element) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        elements[size++] = element;
    }       
     
    // Remove element from the end
    void popBack() {
        if (size > 0) {
            --size;
        }
    }                       
    
    // Insert element at index
    void insert(const T& element, int index) {
        if (index < 0 || index > size) {
            throw std::out_of_range("Index out of range");
        }
        if (size == capacity) {
            resize(capacity * 2);
        }
        for (int i = size; i > index; i--) {
            elements[i] = elements[i - 1];
        }
        elements[index] = element;
        size++;
    }

};

#endif
