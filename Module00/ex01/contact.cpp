/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:15:37 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/12 18:56:32 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

void CONTACT::setFname(std::string first_name){
    this->first_name = first_name;
}

void CONTACT::setLname(std::string last_name){
    this->last_name = last_name;
}

void CONTACT::setNname(std::string nick_name){
    this->nick_name = nick_name;
}

void CONTACT::setPnum(std::string phone_num){
    this->phone_num = phone_num;
}

void CONTACT::setSecret(std::string secret){
    this->secret = secret;
}


std::string CONTACT::getFname(){
    return this->first_name;
}

std::string CONTACT::getLname(){
    return this->last_name;
}
std::string CONTACT::getNname(){
    return this->nick_name;
}
std::string CONTACT::getPnum(){
    return this->phone_num;
}
std::string CONTACT::getSecret(){
    return this->secret;
}
