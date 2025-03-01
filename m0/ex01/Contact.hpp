/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:29:35 by ededemog          #+#    #+#             */
/*   Updated: 2025/03/01 17:32:13 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	number;

  public:
	Contact(void);
	~Contact(void);

	void		setFirstName(std::string &firstName);
	void		setLastName(std::string &lastName);
	void		setNickname(std::string &nickname);
	void		setNumber(std::string &number);
	
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getNumber(void);
};

#endif