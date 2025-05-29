/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:14:16 by lolq              #+#    #+#             */
/*   Updated: 2025/05/29 11:52:32 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::Contact(const std::string& firstName, const std::string& lastName, 
                 const std::string& nickname, const std::string& phoneNum, 
                 const std::string& secret)
    : firstName(firstName), lastName(lastName), phoneNum(phoneNum), nickname(nickname), secret(secret) {}

void    Contact::setFirstName(const std::string& firstName)
{
    this->firstName = firstName;
}

void    Contact::setLastName(const std::string& lastName)
{
    this->lastName = lastName;
}

void    Contact::setNickname(const std::string& nickname)
{
    this->nickname = nickname;
}
void    Contact::setPhoneNum(const std::string& phoneNum)
{
    this->phoneNum = phoneNum;   
}
void    Contact::setSecret(const std::string& secret)
{
    this->secret = secret;
}

std::string Contact::getFirstName() const
{
    return (firstName);
}

std::string Contact::getLastName() const
{
    return (lastName);
}

std::string Contact::getNickname() const
{
    return (nickname);
}

std::string Contact::getPhoneNum() const
{
    return (phoneNum);
}

std::string Contact::getSecret() const
{
    return (secret);
}

void    Contact::displayContactInfo() const
{
    std::cout << "First name    : " << firstName << std::endl;
    std::cout << "Last name     : " << lastName << std::endl;
    std::cout << "Nickname      : " << nickname << std::endl;
    std::cout << "Phone Number  : " << phoneNum << std::endl;
    std::cout << "Secret        : " << secret << std::endl;
}