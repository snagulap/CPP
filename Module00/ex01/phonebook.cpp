/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:02:07 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/14 15:46:29 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"

int PHONEBOOK::index = 0;

void PHONEBOOK::ADD(void)
{
        std::string str;
        int j = 0;      
        std::cout << "Enter First Name: ";
        std::getline(std::cin, str);
        this->contact[PHONEBOOK::index].setFname(str);
        std::cout << "Enter Last Name: ";
        std::getline(std::cin, str);
        this->contact[PHONEBOOK::index].setLname(str);
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, str);
        this->contact[PHONEBOOK::index].setNname(str);
        std::cout << "Enter Phone Number: ";
        int tr = 1;
        while(tr)
        {
                std::getline(std::cin, str);
                this->contact[PHONEBOOK::index].setPnum(str);
                for(int j = 0;j < str.length(); j++)
                {
                        if(isdigit(str[j]))
                                tr = 0;
                        else
                        {
                                std::cout<<"Please enter valid number:";
                                break;
                        }
                }
        }
        std::cout << "Enter Darkest Secret: ";
        std::getline(std::cin, str);
        this->contact[PHONEBOOK::index].setSecret(str);
        if (!contact[PHONEBOOK::index].getFname().empty() &&
        !contact[PHONEBOOK::index].getLname().empty() &&
        !contact[PHONEBOOK::index].getNname().empty() &&
        !contact[PHONEBOOK::index].getPnum().empty() &&
        !contact[PHONEBOOK::index].getSecret().empty()) {
        std::cout << "Contact saved successfully." << std::endl;
        } else {
        std::cout << "Error: All fields must be filled." << std::endl;
        }
        PHONEBOOK::index = (PHONEBOOK::index + 1) % PHONEBOOK::nc;
        std::cout<<"Enter a command: ";
} 

void PHONEBOOK::SEARCH(void)
{
        std::cout<< std::setw(10) << "Index " << " |";
        std::cout<< std::setw(10) << "First Name" << "|";
        std::cout<< std::setw(10) << "Last Name" << "|";
        std::cout<< std::setw(10) << "Nick Name" << "|"<< std::endl;
        std::string str;
        for (int i = 0; i < PHONEBOOK::index; i++)
        {
                std::cout << "|" << std::setw(10) << i;
                str= contact[i].getFname();
                if(str.length() > 10)
                        std::cout << "|" << std::setw(10) << str.substr(0,9) + '.';
                else
                        std::cout << "|" << std::setw(10) << str;
                str = contact[i].getLname();
                if(str.length() > 10)
                        std::cout << "|" << std::setw(10) << str.substr(0,9) + '.';
                else
                         std::cout << "|" << std::setw(10) << str;
                str = contact[i].getNname();
                if(str.length() > 10)
                        std::cout << "|" << std::setw(10) << str.substr(0,9) + '.' << "|" << std::endl;
                else
                        std::cout << "|" << std::setw(10) << str<< "|" <<std::endl;
        }
        std::cout<< "Enter a search contact index :";
        std::cin>>str;
        int search = atoi(str.c_str());
        if (search < 0 || search > PHONEBOOK::index - 1)
                std::cout<< "Valid index of search contact: "<<std::endl;
        else if(contact[search].getFname().empty() &&
                contact[search].getLname().empty() &&
                contact[search].getNname().empty() &&
                contact[search].getPnum().empty() &&
                contact[search].getSecret().empty())
                ;
        else{       
            std::cout<< "First Name:" << contact[search].getFname()<<std::endl;
            std::cout<< "Last Name:" << contact[search].getLname()<<std::endl;
            std::cout<< "Nick Name:" << contact[search].getNname()<<std::endl;
            std::cout<< "phone Name:" << contact[search].getPnum()<<std::endl;
            std::cout<< "Secret:" << contact[search].getSecret()<<std::endl;
        }    
        std::cout<<"Enter a command: ";
}

