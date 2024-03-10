/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:51:41 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/24 13:06:39 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
class Fixed{
  private:
        int Int;
        static const int Float = 8;
  public:
        Fixed();
        Fixed(int num);
        Fixed(float num_float);
        Fixed (const Fixed& copy);
        ~Fixed();

        int getRawBits(void)const;
        void setRawBits(int const raw);
        Fixed &operator = (const Fixed &f);
        float toFloat(void)const;
        int toInt(void)const;
        
        bool operator>(const Fixed& other)const;
        bool operator<(const Fixed& other)const;
        bool operator>=(const Fixed& other)const;
        bool operator<=(const Fixed& other)const;
        bool operator==(const Fixed& other)const;
        bool operator!=(const Fixed& other)const;

        Fixed operator+(const Fixed& other)const;
        Fixed operator-(const Fixed& other)const;
        Fixed operator*(const Fixed& other)const;
        Fixed operator/(const Fixed& other)const;

        Fixed& operator++();    // Pre-increment
        Fixed& operator--();    // Pre-decrement

        Fixed operator++(int);  // Post-increment
        Fixed operator--(int);  // Post-decrement
        
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);       
};
    std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
 
#endif