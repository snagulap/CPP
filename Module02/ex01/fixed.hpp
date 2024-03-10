/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:41:06 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/20 18:58:08 by snagulap         ###   ########.fr       */
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
        
          
};

 std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
 
#endif
