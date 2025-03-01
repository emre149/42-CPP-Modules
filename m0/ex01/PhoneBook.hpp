/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:01:56 by ededemog          #+#    #+#             */
/*   Updated: 2025/03/01 18:10:15 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <string>

class PhoneBook
{
  private:
	Contact contacts[8];
	int contactIndex;
	int contactCount;
	void const displayHeader(void);
	void const displayContact(int index);
	void const displayContactDetails(int index);
	std::string const truncate(const std::string &str);

  public:
	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);
	void	exitPhoneBook(void);
};

#endif