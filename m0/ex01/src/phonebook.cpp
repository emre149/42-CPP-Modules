/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:25:26 by ededemog          #+#    #+#             */
/*   Updated: 2025/04/03 10:44:54 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void) : contactIndex(0), contactCount(0)
{
}

void PhoneBook::addContact(const Contact &contact)
{
	if (contactCount < 8)
	{
		contacts[contactCount] = contact;
		contactCount++;
	}
	else
	{
		contacts[contactIndex] = contact;
		contactIndex = (contactIndex + 1) % 8;
	}
}

void PhoneBook::displayContactHeader() const
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	std::cout << std::string(43, '-') << std::endl;
}

std::string PhoneBook::formatDisplay(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::displayContactInfo(int index) const
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << formatDisplay(contacts[index].getFirstName()) << "|";
	std::cout << std::setw(10) << formatDisplay(contacts[index].getLastName()) << "|";
	std::cout << std::setw(10) << formatDisplay(contacts[index].getNickname()) << std::endl;
}

bool PhoneBook::isValidIndex(int index) const
{
	return (index >= 0 && index < contactCount);
}

void PhoneBook::searchContact() const
{
	int index;

	if (contactCount == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return;
	}
	displayContactHeader();
	for (int i = 0; i < contactCount; i++)
		displayContactInfo(i);
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> index;

	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input." << std::endl;
		return;
	}
	if (!isValidIndex(index))
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}

	std::cout << "\nContact info:" << std::endl;
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Number: " << contacts[index].getNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}

int PhoneBook::getContactCount() const
{
	return (contactCount);
}
