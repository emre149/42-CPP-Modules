/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:29:35 by ededemog          #+#    #+#             */
/*   Updated: 2025/03/10 18:20:47 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string number;
	std::string darkestSecret;

public:
	Contact(void);

	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setNickname(const std::string &nickname);
	void setNumber(const std::string &number);
	void setDarkestSecret(const std::string &darkestSecret);

	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getNumber(void) const;
	std::string getDarkestSecret(void) const;

	bool isEmpty(void) const;
};

#endif