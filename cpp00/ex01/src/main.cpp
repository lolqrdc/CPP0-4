/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:00:59 by lolq              #+#    #+#             */
/*   Updated: 2025/05/30 10:27:37 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
   PhoneBook phonebook;
   std::string cmd;
   
   std::cout << "Welcome to the phonebook!" << std::endl;
   std::cout << "You can use any of these commands: ADD, SEARCH, EXIT" << std::endl;
   while (1)
   {
        std::cout << "> ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
        {
            std::string firstName, lastName, nickname, phoneNum, secret;
        
            std::cout << "Enter first name: ";
            std::getline(std::cin, firstName);
            
            std::cout << "Enter last name: ";
            std::getline(std::cin, lastName);

            std::cout << "Enter a nickname: ";
            std::getline(std::cin, nickname);

            std::cout << "Enter a phone number: ";
            std::getline(std::cin, phoneNum);

            std::cout << "Enter their darkest secret: ";
            std::getline(std::cin, secret);

            Contact NewContact(firstName, lastName, nickname, phoneNum, secret);
            phonebook.addContact(NewContact);
            std::cout << "Contact added !" << std::endl;
            
        }
        else if (cmd == "SEARCH")
        {
            int index;
            phonebook.displayContacts();
            std::cout << "Enter index to display: ";
            std::cin >> index;
            if (std::cin.fail())
            {
                std::cout << "Invalid input: please enter a number." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (index < 1 || index > phonebook.getNbContact())
            {
                std::cout << "Invalid index: please enter a value between 1 and " << phonebook.getNbContact() << "." << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else
            {
                phonebook.searchContact(index - 1);
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        else if (cmd == "EXIT")
        {
            std::cout << "See you next time!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Unknown command. Please use ADD, SEARCH, or EXIT." << std::endl;
        }
   }
   return (0);
}
