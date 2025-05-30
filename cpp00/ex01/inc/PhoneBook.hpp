/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:16:40 by lolq              #+#    #+#             */
/*   Updated: 2025/05/30 09:45:43 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <limits>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
    int     nbContacts;
    int     ogContactIndex;
    Contact contacts[8];

    public:
    // Constructor by default
    PhoneBook();
    // Setters: modify private data
    void    setNbContact(int amount);
    void    setOldContact(int OgIndex);
    // Getters: read-only access to private data
    int     getNbContact() const;
    int     getOldContact() const;
    // Methods: action
    void    displayContacts() const;
    void    addContact(const Contact& contact);
    void    searchContact(int index) const;
};

