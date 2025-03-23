/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:01:56 by ededemog          #+#    #+#             */
/*   Updated: 2025/03/10 18:20:56 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int contactIndex;
	int contactCount;

	void displayContactHeader() const;
	std::string formatDisplay(const std::string &str) const;
	void displayContactInfo(int index) const;
	bool isValidIndex(int index) const;

public:
	PhoneBook(void);

	void addContact(const Contact &contact);
	void searchContact(void) const;
	int getContactCount(void) const;
};

#endif