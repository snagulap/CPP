/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:03:15 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/16 17:36:06 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
class Fixed{
    private:
      int fixed;
      static const int frac = 8;
    public:
      Fixed(void);
      Fixed(const Fixed &copy);
      ~Fixed(void);
      Fixed &operator = (const Fixed &f);
      int getRawBits(void)const;
      void setRawBits(int const raw);
};


#endif