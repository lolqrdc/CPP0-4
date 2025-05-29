/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:16:43 by lolq              #+#    #+#             */
/*   Updated: 2025/05/29 14:04:01 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
class   Contact 
{
    private:
    std::string  firstName;
    std::string  lastName;
    std::string  phoneNum;
    std::string  nickname;
    std::string  secret;

    public:
    // Constructor by default
    Contact();
    // Contructor with params
    Contact(const std::string& firstName, const std::string& lastName, 
            const std::string &nickname, const std::string& phoneNum, 
            const std::string& secret);
    // Setters: modify private data
    void    setFirstName(const std::string& firstName);
    void    setLastName(const std::string& lastName);
    void    setNickname(const std::string& nickname);
    void    setPhoneNum(const std::string& phoneNum);
    void    setSecret(const std::string& secret);
    // Getters: read only access to private data
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNum() const;
    std::string getSecret() const;
    // Method: action
    void    displayContactInfo() const;
};
