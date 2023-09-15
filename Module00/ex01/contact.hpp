/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:34:18 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/13 18:38:28 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>


class CONTACT{
  private:
  std::string first_name;
  std::string last_name;
  std::string nick_name;
  std::string phone_num;
  std::string secret;
  public:
  void  setFname(std::string first_name);
  void  setLname(std::string last_name);
  void  setNname(std::string nick_name);
  void  setPnum(std::string phone_num);
  void  setSecret(std::string secret);
  std::string getFname();
  std::string getLname();
  std::string getNname();
  std::string getPnum();
  std::string getSecret();
  
};

#endif