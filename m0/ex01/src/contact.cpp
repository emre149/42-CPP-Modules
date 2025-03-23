/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:53:34 by ededemog          #+#    #+#             */
/*   Updated: 2025/03/10 18:20:50 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstName(""), lastName(""), nickname(""), number(""), darkestSecret("")
{
}

void Contact::setFirstName(const std::string &firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
}

void Contact::setNumber(const std::string &number)
{
	this->number = number;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const
{
	return (this->firstName);
}

std::string Contact::getLastName() const
{
	return (this->lastName);
}

std::string Contact::getNickname() const
{
	return (this->nickname);
}

std::string Contact::getNumber() const
{
	return (this->number);
}

std::string Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}

bool Contact::isEmpty() const
{
	return firstName.empty();
}
