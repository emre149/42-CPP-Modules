/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:15:25 by ededemog          #+#    #+#             */
/*   Updated: 2025/03/10 18:26:06 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string getInput(const std::string &prompt)
{
	std::string input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return "";
		if (!input.empty())
			return (input);
		std::cout << "Field cannot be empty." << std::endl;
	}
}

void addNewContact(PhoneBook &phonebook)
{
	Contact contact;

	std::cout << "Adding new contact:" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contact.setFirstName(getInput("Enter first name: "));
	contact.setLastName(getInput("Enter last name: "));
	contact.setNickname(getInput("Enter nickname: "));
	contact.setNumber(getInput("Enter phone number: "));
	contact.setDarkestSecret(getInput("Enter darkest secret: "));
	phonebook.addContact(contact);
	std::cout << "Contact added successfully." << std::endl;
}
int	main()
{
	PhoneBook phonebook;
	std::string command;

	std::cout << "Weclome to My Awesome PhoneBook!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (true)
	{
		std::cout << "\nEnter command: ";
		std::cin >> command;

		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		if (command == "ADD")
			addNewContact(phonebook);
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}
