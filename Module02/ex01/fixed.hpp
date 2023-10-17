/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:41:06 by snagulap          #+#    #+#             */
/*   Updated: 2023/10/16 18:18:53 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
  private:
        const int Int = 8;
        const float Float = 8;
    public:
        Fixed();
        Fixed (const Fixed& copy);
        ~Fixed();
        
        float toFloat(void)const;
        int toInt(void)const;
        
          
};

#endif
