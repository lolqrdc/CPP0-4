/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:05:46 by lolq              #+#    #+#             */
/*   Updated: 2025/05/30 10:18:11 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): nbContacts(0), ogContactIndex(0) {}

void    PhoneBook::addContact(const Contact& contact)
{
    if (nbContacts < 8)
    {
        contacts[nbContacts] = contact;
        nbContacts++;
    }
    else
    {
        contacts[ogContactIndex] = contact;
        ogContactIndex = (ogContactIndex + 1) % 8;
    }
}

static std::string formated(const std:: string& str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (std::string(10 - str.length(), ' ') + str);
}

void    PhoneBook::displayContacts() const
{
    std::cout << "Index | First Name | Last Name | Nickname" << std::endl;
    int i = 0;
    while (i < nbContacts)
    {
        std::cout << i + 1 << " | "
                << formated(contacts[i].getFirstName()) << " | "
                << formated(contacts[i].getLastName()) << " | "
                << formated(contacts[i].getNickname()) << std::endl;
        i++;
    }
}

void    PhoneBook::searchContact(int index) const
{
    if (index >= 0 && index < nbContacts)
    {
        contacts[index].displayContactInfo();
    }
    else
    {
        std::cout << "Invalid index!" << std::endl;
    }
}

void    PhoneBook::setNbContact(int amount)
{
    nbContacts = amount;
}

void    PhoneBook::setOldContact(int OgIndex)
{
    ogContactIndex = OgIndex;
}

int PhoneBook::getNbContact() const
{
    return (nbContacts);
}

int PhoneBook::getOldContact() const
{
    return (ogContactIndex);
}
